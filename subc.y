%{                 
/*                 
 * File Name   : subc.y
 * Description : a skeleton bison input
 */

#include "subc.h"

int    yylex ();
int    yyerror (char* s);
void    REDUCE(char* s);
extern struct decl* inttype;
extern struct decl* chartype;
extern struct decl* voidtype;
extern struct id* returnid;

%}      

/* yylval types */
%union {
        int             intVal;
        char            *stringVal;
        struct id       *idptr;
        struct decl     *declptr;
        struct ste      *steptr;
}     

/* Precedences and Associativities */
   
%left   ','
%right  '='
%left   LOGICAL_OR
%left   LOGICAL_AND
%left   '&'
%left   EQUOP 
%left   RELOP
%left   '+' '-'
%left   '*'
%right  '!' INCOP DECOP
%left '[' ']' ')' '(' '.' STRUCTOP
   
%nonassoc IF
%nonassoc ELSE 
/* Token and Types */
%token                  VOID STRUCT RETURN IF ELSE WHILE FOR BREAK CONTINUE LOGICAL_OR LOGICAL_AND INCOP DECOP
%token<idptr>           ID
%token<stringVal>       CHAR_CONST STRING STRUCTOP RELOP EQUOPG
%token<intVal>          INTEGER_CONST
%token<idptr>           TYPE
%type<intVal>           pointers const_expr
%type<declptr>          type_specifier struct_specifier open_func_param_scope unary binary args and_list or_list and_expr or_expr expr expr_e

%%

program: ext_def_list   {
                REDUCE("program->ext_def_list");
        }
        ;

ext_def_list:   ext_def_list ext_def{
                REDUCE("ext_def_list->ext_def_list ext_def");
        }
                | /* empty */   {
                REDUCE("ext_def_list->epsilon");
        }
        ;
ext_def:         type_specifier pointers ID ';'         {
                REDUCE("ext_def->type_specifier pointers ID ;");
                if($2 == 1) {
                        declare($3, makevardecl(makeptrdecl(makevardecl($1))));
                }else {
                        declare($3, makevardecl($1));
                }
        }
                | type_specifier pointers ID '[' const_expr ']' ';'     {
                REDUCE("ext_def->type_specifier pointers ID '[' const_expr ']' ;");
                if($2 == 1){
                        declare($3, makevardecl(makeptrdecl(makeconstdecl(makearraydecl($5,makevardecl($1))))));
                } else{
                        declare($3, makeconstdecl(makearraydecl($5,makevardecl($1))));
                }
        }
                | func_decl ';' {
                REDUCE("ext_def->func_decl ;");
                pop_scope();
        }
                | type_specifier ';'    {
                REDUCE("ext_def->type_specifier ;");
        }
                | func_decl compound_stmt       {
                REDUCE("ext_def->func_decl compound_stmt");
                pop_scope();
        }
        ;
type_specifier: TYPE{
                REDUCE("type_specifier->TYPE");
                struct decl* currentdecl = findcurrentdecl($1);
                if(check_is_type(currentdecl)) $$ = currentdecl;
                else $$ = NULL;
        }       
                | VOID  {
                REDUCE("type_specifier->VOID");
                $$ = voidtype;
        }
                | struct_specifier{
                REDUCE("type_specifier->struct_specifier");
                $$ = $1;
        }
        ;
struct_specifier: STRUCT ID '{'
        {
                push_scope();
        }
                 def_list
                 '}'
        {
                REDUCE("struct_specifier->STRUCT ID '{' def_list '}'");
                struct ste *fields = pop_scope();
                declare_struct($2, ($$=makestructdecl(fields)));
        }
                | STRUCT ID{
                REDUCE("struct_specifier->STRUCT ID");
                struct decl* declptr = findcurrentdecl_struct($2);
                if(check_is_struct_type(declptr)==1 ) $$ = declptr;
				else  if( declptr == NULL) $$ = NULL;
                else {
                        printf("%s:%d:error: '%s' is not struct type\n",read_filename(), read_line(),$2->name);
                        $$ = NULL;
                }
        }
        //<= In the second case, the struct must have been defined before.
        ;
func_decl:      type_specifier pointers ID '(' open_func_param_scope ')' {
                REDUCE("func_decl->type_specifier pointers ID '(' ')'");
                struct ste* formals;
                struct decl* procdecl = $5;
                formals = pop_scope();
                procdecl->returndecl = formals->decl;
                procdecl->formals = formals->prev;
                push_scope();
                pushstelist(formals);

        }
                | type_specifier pointers ID '(' open_func_param_scope VOID ')' {
                REDUCE("func_decl->type_specifier pointers ID '(' VOID ')'");
                struct ste* formals;
                struct decl* procdecl = $5;
                formals = pop_scope();
                procdecl->returndecl = formals->decl;
                procdecl->formals = formals->prev;
                push_scope();
                pushstelist(formals);
        }
                | type_specifier pointers ID '(' open_func_param_scope param_list ')' {
                REDUCE("func_decl->type_specifier pointers ID '(' param_list ')'");
                struct ste* formals;
                struct decl* procdecl = $5;
                formals = pop_scope();
                procdecl->returndecl = formals->decl;
                procdecl->formals = formals->prev;
                push_scope();
                pushstelist(formals);
        }
        ;

open_func_param_scope : /*empty*/ // mid-rule statement for func decl
        {
                REDUCE("open_func_param_scope -> epsilon");
                struct decl* procdecl = makeprocdecl();
                struct id* name = $<idptr>-1;
                declare(name, procdecl);
                push_scope();
//              printf("returnid : %s\n", returnid->name);
                if($<intVal>-2 == 1) {
                        declare(returnid, makevardecl(makeptrdecl(makevardecl($<declptr>-3))));
                }
                else {
                        declare(returnid, makevardecl($<declptr>-3));
                }
                $$ = procdecl;
        }       
        ;

pointers:       '*'     {
                REDUCE("pointer->'*'");
                $$ = 1;
        }
                | /* empty */   {
                REDUCE("pointer->epsilon");
                $$ = 0;
        }
        ;

param_list  /* list of formal parameter declaration */
                : param_decl    {
                REDUCE("param_list->param_decl");
        }
                | param_list ',' param_decl     {
                REDUCE("param_list->param_list ',' param_decl");
        }
        ;

param_decl:      type_specifier pointers ID     {
                REDUCE("param_decl-> type_specifier pointers ID");
                if($2 == 1) {
                        declare($3, makevardecl(makeptrdecl(makevardecl($1))));
                }
                else {
                        declare($3, makevardecl($1));
                }
        }
                | type_specifier pointers ID '[' const_expr ']' {
                REDUCE("param_decl->type_specifier pointers ID '[' const_expr ']'");
                if($2 == 1){
                        declare($3, makevardecl(makeptrdecl(makeconstdecl(makearraydecl($5,makevardecl($1))))));
                } else{
                        declare($3, makeconstdecl(makearraydecl($5,makevardecl($1))));
                }
        }
        ;
def_list:       def_list def{
                REDUCE("def_list->def_list def");
        }
                | /* empty */{
                REDUCE("def_list->epsilon");
        }
        ;
def:            type_specifier pointers ID ';'  {
                REDUCE("def->type_specifier pointers ID ';'");
                if($2 == 1) {
                        declare($3, makevardecl(makeptrdecl(makevardecl($1))));
                }
                else {
                        declare($3, makevardecl($1));
                }
        }
                | type_specifier pointers ID '[' const_expr ']' ';'     {
                REDUCE("def->type_specifier pointers ID '[' const_expr ']' ;");
                if($2 == 1){
                        declare($3, makevardecl(makeptrdecl(makeconstdecl(makearraydecl($5,makevardecl($1))))));
                } else{
                        declare($3, makeconstdecl(makearraydecl($5,makevardecl($1))));
                }
        }
                | type_specifier ';'    {
                REDUCE("def->type_specifer ;");
        }
                | func_decl ';' {
                REDUCE("def->type_specifer func_decl ;");
        }
        ;
compound_stmt:  '{'	
		{	
					push_scope();
		}
				local_defs stmt_list	
		{
					pop_scope();
		}
				'}'
		{
                REDUCE("compound_stmt->'{' local_defs stmt_list '}'");
        }
        ;
local_defs:     def_list{
                REDUCE("local_defs->def_list");
        }
        ;
stmt_list:      stmt_list stmt{
                REDUCE("stmt_list->stmt_list stmt");
        }
                | /* empty */{
                REDUCE("stmt_list->epsilon");
        }
        ;
stmt:           expr ';'{
                REDUCE("stmt->expr ';'");
        }
                | compound_stmt{
                REDUCE("stmt->compound_stmt");
        }
                | RETURN ';'{
                REDUCE("stmt->RETURN ';'");
                struct decl* returndecl = findcurrentdecl(returnid);
                if(returndecl->type != voidtype){
                        printf("%s:%d:error: return type error (type mismatch)\n",read_filename(), read_line());
                        printf("%s:%d:error: \n",read_filename(), read_line());
                }
        }
                | RETURN expr ';'{
                REDUCE("stmt->RETURN expr ';'");
                struct decl* returndecl = findcurrentdecl(returnid);
                if(!check_compatible(returndecl, $2)){
                        printf("%s:%d:error: return type error (type mismatch)\n",read_filename(), read_line());
                }
        }
                | ';'{
                REDUCE("stmt->';'");
        }
                | IF '(' expr ')' stmt %prec IF {
                REDUCE("stmt->IF '(' expr ')' stmt");
        }
                | IF '(' expr ')' stmt ELSE stmt %prec ELSE {
                REDUCE("stmt->IF '(' expr ')' stmt ELSE stmt");
        }
                | WHILE '(' expr ')' stmt{
                REDUCE("stmt->WHILE '(' expr ')' stmt");
        }
                | FOR '(' expr_e ';' expr_e ';' expr_e ')' stmt{
                REDUCE("stmt->FOR '(' expr_e ';' expr_e ';' expr_e ')' stmt");
        }
                | BREAK ';'{
                REDUCE("stmt->BREAK ';'");
        }
                | CONTINUE ';'{
                REDUCE("stmt->CONTINUE ';'");
        }
        ;
expr_e  :       expr{
                REDUCE("expr_e->expr");
                $$ = $1;
        }
                | /* empty */{
                REDUCE("expr_e->epsilon");
                $$ = NULL;
        }
        ;
const_expr
                : expr  {
                REDUCE("const_expr->expr");
                if(check_is_const($1) && check_is_int($1)){
                        $$ = $1->value;
                }
                else {
                        printf("%s:%d:error: index type error(index must be constInt)\n",read_filename(), read_line());
                        $$ = 0;
                }

        }
        ;
expr:
                unary '=' expr{
                REDUCE("expr->expr '=' expr");
                $$ = assigndecl($1, $3);
        }
                | or_expr{
                REDUCE("expr->or_expr");
                $$ = $1;
        }
        ;
or_expr:        or_list{
                REDUCE("or_expr->or_list");
                $$ = $1;
        }
        ;
or_list:        or_list LOGICAL_OR and_expr{
                REDUCE("or_list->or_list LOGICAL_OR and_expr");
                $$ = logicalopdecl($1,$3);
        }
                | and_expr{
                REDUCE("or_list->and_expr");
                $$ = $1;
        }
        ;
and_expr:       and_list{
                REDUCE("and_expr->and_list");
                $$ = $1;
        }
        ;
and_list:       and_list LOGICAL_AND binary{
                REDUCE("and_list->and_list LOGICAL_AND binary");
                $$ = logicalopdecl($1,$3);
        }
                | binary{
                REDUCE("and_list->binary");
                $$ = $1;
        }
        ;
binary:         binary RELOP binary{
                REDUCE("binary->binary RELOP binary");
                $$ = relopdecl($1, $3);
        }
                | binary EQUOP binary{
                REDUCE("binary->binary EQUOP binary");
                $$ = equopdecl($1, $3);
        }
                | binary '+' binary{
                REDUCE("binary->binary '+' binary");
                $$ = plusdecl($1,$3);
        }
                | binary '-' binary{
                REDUCE("binary->binary '-' binary");
                $$ = minusdecl($1,$3);
        }
                | unary %prec '='{
                REDUCE("binary->unary");
                $$ = $1;
        }
        ;
unary:          '(' expr ')'{
                REDUCE("unary->'(' expr ')'");
                $$ = $2;
        }
                |'(' unary ')'  {
                REDUCE("unary->'(' unary ')'");
                $$ = $2;
        }
                | INTEGER_CONST{
                REDUCE("unary->INTEGER_CONST");
                $$ = makenumconstdecl(inttype, $1);
        }
                | CHAR_CONST{
                REDUCE("unary->CHAR_CONST");
                $$ = makecharconstdecl(chartype, $1);
        }
                | ID{
                REDUCE("unary->ID");
                $$ = findcurrentdecl($1);
        }
                | STRING{
                REDUCE("unary->STRING");
                $$ = makestringconstdecl(chartype, $1);
        }
                | '-' unary %prec '!' {
                REDUCE("unary->'-' unary");
                if(check_is_int($2)) $$ = $2;
                else {
                        printf("%s:%d:error: illegal type for '-' unary op\n",read_filename(), read_line());
                        $$ = NULL;
                }
        }
                | '!' unary{
                REDUCE("unary->'!' unary");
                if(check_is_int($2)) $$ = $2;
                else {
                        printf("%s:%d:error: illegal type for '!' unary op\n",read_filename(), read_line());
                        $$ = NULL;
                }
        }
                | unary INCOP{
                REDUCE("unary->unary INCOP");
                if(check_is_int($1) || check_is_char($1) || check_is_ptr($1)) $$ = $1;
                else {
                        printf("%s:%d:error: illegal type for postfixINCOP\n",read_filename(), read_line());
                        $$ =  NULL;
                }
        }
                | unary DECOP{
                REDUCE("unary->unary DECOP");
                if(check_is_int($1) || check_is_char($1) || check_is_ptr($1)) $$ = $1;
                else {
                        printf("%s:%d:error: illegal type for postfixDECOP\n",read_filename(), read_line());
                        $$ =  NULL;
                }
        }
                | INCOP unary{
                REDUCE("unary->INCOP unary");
                if(check_is_int($2) || check_is_char($2) || check_is_ptr($2)) $$ = $2;
                else {
                        printf("%s:%d:error: illegal type for prefixINCOP\n",read_filename(), read_line());
                        $$ =  NULL;
                }
        }
                | DECOP unary{
                REDUCE("unary->DECOP unary");
                if(check_is_int($2) || check_is_char($2) || check_is_ptr($2)) $$ = $2;
                else {
                        printf("%s:%d:error: illegal type for DECOP\n",read_filename(), read_line());

                        $$ = NULL;
                }
        }
                | '&' unary %prec '!'{
                REDUCE("unary->'&' unary");
                $$ = referdecl($2);
        }
                | '*' unary %prec '!' {
                REDUCE("unary->'*' unary");
                $$ = ptropdecl($2);
        }
                | unary '[' expr ']'    {
                REDUCE("unary->unary '[' expr ']'");
                $$ = arrayaccess($1, $3);
        }
                | unary '.' ID  {
                REDUCE("unary-> unary '.' ID");
                $$ = structaccess($1, $3);
        }
                | unary STRUCTOP ID     {
                REDUCE("unary->unary STRUCTOP ID");
                $$ = STRUCTOPdecl($1, $3);
        }
                | unary '(' args ')'    {
                REDUCE("unary->unary '(' args ')'");
                $$ = checkfunctioncall($1,$3);
        }
                | unary '(' ')' {
                REDUCE("unary->unary '(' ')'");
                $$ = checkfunctioncall($1, NULL);
        }
        ;
args:           expr{
                REDUCE("args->expr");
                $$ = makeconstdecl($1->type);
        }
                | args ',' expr{
                REDUCE("args->args ',' expr");
                struct decl* argsdecl = $1;
                if(argsdecl == NULL || $3 == NULL) $$ = NULL;
                else{
                        struct decl* exprdecl = makeconstdecl($3->type);

                        while(argsdecl->next != NULL){
                                argsdecl = argsdecl->next;
                        }
                        argsdecl->next = exprdecl;
                        $$ = $1;
                }
        }
        ;

%%

/*  Additional C Codes 
        Implemnt REDUCE function here */

int    yyerror (char* s)
{
        fprintf (stderr, "%s\n", s);
}

int 	yyprint(char* s)
{
		fprintf (stdout, "%s\n", s);
}

void    REDUCE( char* s)
{
        //printf("%s\n",s);
}
