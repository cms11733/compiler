%{
/*
 * File Name   : subc.l
 * Description : a skeleton flex input
 */

#include "subc.h"
#include "subc.tab.h"
static int comment_depth = 0;
static int lineno = 1;
static char* filename;
static char* outputfile;
extern struct decl* inttype;
extern struct decl* chartype;
extern struct decl* voidtype;
extern struct id* returnid;
void start_code();

%}

/* regular definitions */ 
alnum           [0-9A-Za-z]
letter          [A-Za-z_]
digit           [0-9]
id              {letter}({letter}|{digit})*
integer_const   ([1-9]{digit}*)|"0"
white-space             [ \t]+
special-char    \\[nt]
op              [\[\]\(\)\.\!\*\/\%\+\-\&\=\.\{\}]


%x COMMENT
%%
"||"            { return LOGICAL_OR;}
"&&"            { return LOGICAL_AND;}
"<"|"<="|">"|">="       {
                  yylval.stringVal = strdup(yytext);
                  return RELOP;}
"=="|"!="       { 
                  yylval.stringVal = strdup(yytext); 
                  return EQUOP;}
"++"            { return INCOP;}
"--"            { return DECOP;}
"->"            { return STRUCTOP;}

{op}            { return yytext[0];}
{id}    {       //printf("yytext = %s\n", yytext);
                   struct id *entered  = enter(ID, yytext, yyleng);
                   yylval.idptr = entered;
                   return entered->lextype;
                }
{integer_const} {
                   yylval.intVal = atoi(yytext);
                   return INTEGER_CONST;
                }
\"({special-char}|[^\\\"\n])*\" {
                        /* String Variable */
                   yylval.stringVal = strdup(yytext);
                   return STRING;
                }
'({special-char}|[^\\'\n])'     {
                        /* Character Variable */
                   yylval.stringVal = strdup(yytext);
                   return CHAR_CONST;
                }
","             { return ','; }
";"             { return yytext[0]; }

{white-space}
<*>\n              ++lineno;
<INITIAL,COMMENT>"/*"   {
                   ++comment_depth;
                   BEGIN (COMMENT);
                }
<COMMENT>"*/"      if(--comment_depth == 0) BEGIN (INITIAL);
<COMMENT>.               {}


%%

int read_line()
{
   return lineno;
}

char* read_filename()
{
        return filename;
}

char* read_outputfile()
{
		return outputfile;
}


int main(int argc, char* argv[])
{
   static char *keyword[] = { "int", "char", "void", "struct", "return", "if", "else", "while", "for", "break", "continue", NULL };
   static int tokentype[] = { TYPE, TYPE, VOID, STRUCT, RETURN, IF, ELSE, WHILE, FOR, BREAK, CONTINUE, 0 };
   int i;
   for(i = 0; keyword[i] != NULL; i++)
      enter(tokentype[i], keyword[i], strlen(keyword[i]));

   if(argc >= 2) { 
	   yyin = fopen(argv[1], "r");
	   filename = argv[1];
	   outputfile = argv[2];
   }
   else yyin = stdin;
   if(!yyin) {
      printf("Can't open input stream!\n");
      exit(1);
   }

   start_code();
   init_type();

   yyparse();
   fclose(yyin);
   return 0;
}

void init_type(){
    push_scope();

    inttype     = maketypedecl(INT_TYPE);
    chartype    = maketypedecl(CHAR_TYPE);
    voidtype    = maketypedecl(VOID_TYPE);

    declare(enter(TYPE,"int",3), inttype);
    declare(enter(TYPE,"char",4), chartype);
    returnid    = enter(ID,"*return", 7);
}

void start_code(){
	yyprint("\tshift_sp 1");
	yyprint("\tpush_const EXIT");
	yyprint("\tpush_reg fp");
	yyprint("\tpush_reg sp");
	yyprint("\tpop_reg fp");
	yyprint("\tjump main");
	yyprint("EXIT:");
	yyprint("\texit");
}

