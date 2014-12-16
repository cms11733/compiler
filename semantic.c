#include "subc.h"

#define FALSE 0
#define TRUE 1

void push_scope(){
        struct sse * new_scope_stack = (struct sse*) malloc(sizeof(struct sse));

        new_scope_stack->prev = scope_stack;
        scope_stack = new_scope_stack;
        scope_stack->scope_entry = NULL;
}

struct ste* pop_scope(){
        struct ste* ret_ste = NULL;
        struct ste* temp = NULL;
        struct ste* scope_top = scope_stack->scope_entry;
        for(;scope_top; scope_top = temp){
                temp = scope_top->prev;
                scope_top->prev = ret_ste;
                ret_ste = scope_top;
        }

        //must free scope_stack;
        scope_stack = scope_stack->prev;

        return ret_ste;
}

struct ste* st_insert(struct id* name, struct decl* decl){
        struct ste* ret_ste;
        if(scope_stack == NULL) {printf("there is no scope stack\n"); return NULL;}
        ret_ste = (struct ste*) malloc(sizeof(struct ste));
        ret_ste->name = name;
        ret_ste->decl = decl;
	if(scope_stack->scope_entry != NULL)
		ret_ste->offset = scope_stack->scope_entry->offset + decl->size;
	else 
		ret_ste->offset = decl->size;
        ret_ste->prev = scope_stack->scope_entry;

        scope_stack->scope_entry = ret_ste;

        return ret_ste;
}

struct ste* st_lookup(struct id* name){
        struct ste* ret_ste;
        struct sse* ss;
        for(ss = scope_stack; ss != NULL; ss = ss->prev){
                if(ret_ste = st_lookup_in_scope(ss->scope_entry, name))
                        return ret_ste;
        }
        return NULL;
}

struct ste* st_lookup_in_scope(struct ste* scope, struct id* name){
        struct ste* t_scope;
        t_scope = scope;
        while(t_scope != NULL){
                if( t_scope->name == name) return t_scope;
                t_scope = t_scope-> prev;
                //printf("%s",sc->name->name); //dbg
        }
        return NULL;
}

struct ste* declare(struct id* id, struct decl* decl){
        if(decl == NULL) return NULL;
        if(st_lookup_in_scope(scope_stack->scope_entry,id)!=NULL) {
                printf("%s:%d:error: '%s' already declared\n",read_filename(), read_line(), id->name);
                return NULL;
        }

        return st_insert(id, decl);
}

struct decl* maketypedecl(int type){
        struct decl* typedecl = (struct decl*) malloc(sizeof(struct decl));
        typedecl->declclass = TYPE_DECL;
        typedecl->typeclass = type;
		if(type == 3) typedecl->size = 0;
		else if(type == 1 || type == 2) typedecl->size = 1;
		else typedecl->size = 1;

        return typedecl;
}

struct decl* makestructdecl(struct ste* fields){

        struct decl* typedecl = (struct decl*) malloc(sizeof(struct decl));
        typedecl->declclass = TYPE_DECL;
        typedecl->typeclass = STRUCT_TYPE;
        typedecl->fieldlist = fields;
	struct ste* fieldlist = fields;
	if(fieldlist == NULL){
		typedecl->size = 0;
	}
	else {
		while(fieldlist->prev){
			fieldlist = fieldlist->prev;
		}
	}
	typedecl->size = fieldlist->offset;

        return typedecl;
}

struct decl* makeprocdecl(){
        struct decl* procdecl = (struct decl*) malloc(sizeof(struct decl));
        procdecl->declclass = FUNC_DECL;

        return procdecl;
}

struct decl* makevardecl(struct decl* typedecl){
        if(typedecl == NULL) return NULL;
        if((check_is_type(typedecl) == FALSE)) {
                printf("ERROR type_specifier is not type decl\n");
                return NULL;
        }
       struct decl* vardecl = (struct decl*) malloc(sizeof(struct decl));
        vardecl->declclass = VAR_DECL;
        vardecl->type = typedecl;
	vardecl->size = typedecl->size;
	if(scope_stack->scope_entry != NULL)
		vardecl->offset = scope_stack->scope_entry->offset;
	else 
		vardecl->offset = 0;

        return vardecl;
}

struct decl* makeptrdecl(struct decl* typedecl){
        if(typedecl == NULL) return NULL;
        if(check_is_type == FALSE){
                printf("ERROR type_specifier is not type decl\n");
                return NULL;
        }
        struct decl* ptrdecl = (struct decl*) malloc(sizeof(struct decl));
        ptrdecl->declclass = TYPE_DECL;
        ptrdecl->typeclass = PTR_TYPE;
        ptrdecl->ptrto  = typedecl;
	ptrdecl->size = 1;
        return ptrdecl;
}

struct decl* makearraydecl(int index, struct decl* vardecl){
        if(vardecl==NULL) return NULL;
        if(check_is_var == FALSE) {
                printf("not var type\n");
                return NULL;
        }

        struct decl* arraydecl = (struct decl*) malloc(sizeof(struct decl));
        arraydecl->declclass = TYPE_DECL;
        arraydecl->typeclass = ARRAY_TYPE;
        arraydecl->num_index = index;
        arraydecl->elementvar = vardecl;
	arraydecl->size = index*vardecl->size;
        return arraydecl;
}

struct decl* makeconstdecl(struct decl* typedecl){
        if(typedecl == NULL) return NULL;
        struct decl* constdecl = (struct decl*) malloc(sizeof(struct decl));
        constdecl->declclass = CONST_DECL;
        constdecl->type = typedecl;
	constdecl->size = typedecl->size;

        return constdecl;
}

struct decl* makenumconstdecl(struct decl* typedecl, int intVal){
        struct decl* constdecl = (struct decl*) malloc(sizeof(struct decl));
        constdecl->declclass = CONST_DECL;
        constdecl->type = typedecl;
        constdecl->value = intVal;
	constdecl->size = 1;	

        return constdecl;
}

struct decl* makecharconstdecl(struct decl* typedecl, char* stringVal){
        struct decl* constdecl = (struct decl*) malloc(sizeof(struct decl));
        constdecl->declclass = CONST_DECL;
        constdecl->type = typedecl;
        constdecl->string_value = stringVal;
	constdecl->size = 1;

        return constdecl;
}

struct decl* makestringconstdecl(struct decl* typedecl, char* stringVal){
        struct decl* arrayelementdecl = (struct decl*) malloc(sizeof(struct decl));
        arrayelementdecl->declclass = CONST_DECL;
        arrayelementdecl->type = typedecl;
        struct decl* constdecl = (struct decl*) malloc(sizeof(struct decl));
        constdecl->declclass = CONST_DECL;
	struct decl* arraydecl = makearraydecl(strlen(stringVal), arrayelementdecl); 
        constdecl->type = arraydecl;
        constdecl->string_value = stringVal;
	constdecl->size = arraydecl->size;

        return constdecl;
}

struct decl* findcurrentdecl(struct id* name){

//printf("ID is %s\n", name->name);     //dbg
        struct ste* currentdecl = st_lookup(name);
        if(currentdecl) return currentdecl->decl;
        else {
                printf("%s:%d:error: '%s' Undeclared\n",read_filename(), read_line(), name->name);
                return NULL;
        }
}

int check_is_type(struct decl* declptr){
        if(declptr == NULL) return FALSE;
        if(declptr->declclass == TYPE_DECL) return TRUE;
        else return FALSE;
}

int check_is_var(struct decl* declptr){
        if(declptr == NULL) return FALSE;
        if(declptr->declclass == VAR_DECL) return TRUE;
        else return FALSE;
}

int check_is_ptr(struct decl* declptr){
        if(declptr == NULL) return FALSE;
        struct decl* typedecl = declptr->type;
        if(typedecl->declclass != TYPE_DECL) return FALSE;
        else if(typedecl->typeclass == PTR_TYPE) return TRUE;
        else return FALSE;
}

int check_is_const(struct decl* declptr){
        if(declptr == NULL) return FALSE;
		        if(declptr->declclass == CONST_DECL) return TRUE;
        else return FALSE;
}

int check_is_int(struct decl* declptr){
        if(declptr == NULL) return FALSE;
        struct decl* typedecl = declptr->type;
        if(typedecl == inttype) return TRUE;
        else return FALSE;
}

int check_is_char(struct decl* declptr){
        if(declptr == NULL) return FALSE;
        struct decl* typedecl = declptr->type;
        if(typedecl == chartype) return TRUE;
        else return FALSE;
}

int check_is_void(struct decl* declptr){
        if(declptr == NULL) return FALSE;
        struct decl* typedecl = declptr->type;
        if(typedecl == voidtype) return TRUE;
        else return FALSE;
}

int check_is_struct(struct decl* declptr){
        if(declptr == NULL) return FALSE;
        struct decl* typedecl = declptr->type;
        return check_is_struct_type(typedecl);
}

int check_is_struct_type(struct decl* typeptr){
        if(typeptr == NULL) return FALSE;
        if(typeptr->typeclass == STRUCT_TYPE) return TRUE;
        else return FALSE;
}
int check_is_array(struct decl* declptr){
        if(declptr == NULL) return FALSE;
        struct decl* typedecl = declptr->type;
        if(typedecl->declclass != TYPE_DECL) return FALSE;
        else if(typedecl->typeclass != ARRAY_TYPE) return FALSE;
        else return TRUE;
}

int check_is_string(struct decl* declptr){
		if(declptr == NULL) return FALSE;
		if(check_is_const(declptr) == FALSE) return FALSE;
		else if(check_is_array(declptr) == FALSE) return FALSE;
		else if(check_is_const(declptr->type->elementvar) == FALSE) return FALSE;
		else if(check_is_char(declptr->type->elementvar) == FALSE) return FALSE;
		else return TRUE;
		
}

int check_is_proc(struct decl* declptr){
        if(declptr == NULL) return FALSE;
        if(declptr->declclass != FUNC_DECL) return FALSE;
        else return TRUE;
}

void pushstelist(struct ste* popped_scope){
        //only be used in front part of new scope
		        if(popped_scope == NULL) return;
        struct ste* new_ste = popped_scope;
        while(new_ste){
                declare(new_ste->name, new_ste->decl);
                new_ste = new_ste->prev;
        }
}

struct decl* INCOPDECOPdecl(struct decl* declptr, int i){
		struct decl* constdecl = (struct decl*) malloc(sizeof(struct decl));
		constdecl->declclass = CONST_DECL;
		constdecl->value = declptr->value + i;
		constdecl->type = declptr->type;
		constdecl->size = declptr->size;

		return constdecl;
}
struct decl* arrayaccess(struct decl* arrayptr, struct decl* indexptr){
        if(arrayptr == NULL) return NULL;
        if(indexptr == NULL) {
                printf("Empty array index number\n");
                return NULL;
        }
        if(check_is_array(arrayptr) == FALSE) {
                printf("Can't access to nonarray by arrayaccess\n");
                return NULL;
        }
        struct decl* arraytype = arrayptr->type;
        if(inttype ==  indexptr->type)  return arraytype->elementvar;
        else {
                printf("%s:%d:error: indextype error (index of arrays must be int)\n",read_filename(), read_line());
                return NULL;
        }
}

struct decl* structaccess(struct decl* structptr, struct id* fieldid){
        if(structptr == NULL) return NULL;
        if(fieldid == NULL) {
                printf("Empty field index\n");
                return NULL;
        }
        if(check_is_struct(structptr) == FALSE){
                printf("%s:%d:error: invalide struct access error\n",read_filename(), read_line());
                return NULL;
        }
        struct decl* typeptr = structptr->type;
        struct ste* fieldste = st_lookup_in_scope(typeptr->fieldlist, fieldid);
        if(fieldste) return fieldste->decl;
        else {
                printf("%s:%d:error: undeclared field '%s'\n",read_filename(), read_line(), fieldid->name);
                return NULL;
        }
}

struct decl* plusdecl(struct decl* decl1, struct decl* decl2){
        if(decl1 == NULL | decl2 == NULL) return NULL;
        struct decl* decl_after= NULL;
        if((check_is_int(decl1) && check_is_int(decl2)) == TRUE) {
                decl_after = makenumconstdecl(inttype, decl1->value + decl2->value);
        }else if((check_is_ptr(decl1) && check_is_int(decl2) == TRUE)){
                decl_after = makeconstdecl(decl1->type);
				 }else if(((check_is_int(decl1) && check_is_ptr(decl2)) == TRUE)){
                decl_after = makeconstdecl(decl2->type);
        }else {
                printf("%s:%d:error: incompatible type (binary '+')\n",read_filename(), read_line());
        }
        return decl_after;
}

struct decl* minusdecl(struct decl* decl1, struct decl* decl2){
        if(decl1 == NULL | decl2 == NULL) return NULL;
        struct decl* decl_after = NULL;
        if((check_is_int(decl1) && check_is_int(decl2)) == TRUE) {
                decl_after = makenumconstdecl(inttype, decl1->value - decl2->value);
        }else if((check_is_ptr(decl1) && check_is_int(decl2) == TRUE)){
                decl_after = makeconstdecl(decl1->type);
        }else {
                printf("%s:%d:error: incompatible type (binary '-')\n",read_filename(), read_line());
        }
        return decl_after;
}

struct decl* relopdecl(struct decl* decl1, struct decl* decl2){
        if(decl1 == NULL || decl2 == NULL) return NULL;
        struct decl* decl_after = NULL;
        if(check_compatible(decl1, decl2)) decl_after = makeconstdecl(inttype);
        else{
                printf("%s:%d:error: incompatible type of relop op\n",read_filename(), read_line());
        }
        return decl_after;
}

struct decl* equopdecl(struct decl* decl1, struct decl* decl2){
        if(decl1 == NULL | decl2 == NULL) return NULL;
        struct decl* decl_after=NULL;
        if(check_compatible(decl1, decl2)) decl_after = makeconstdecl(inttype);
        else {
                printf("%s:%d:error: incompatible type of equop\n",read_filename(), read_line());
        }
        return decl_after;
}

struct decl* logicalopdecl(struct decl* decl1, struct decl* decl2){
        if(decl1 == NULL | decl2 == NULL) return NULL;
        struct decl* decl_after = NULL;
        if((check_is_int(decl1) && check_is_int(decl2)) == TRUE) {
                decl_after = makeconstdecl(inttype);
        }else {
                printf("%s:%d:error: incompatible type in binary '+'\n",read_filename(), read_line());
        }
        return decl_after;
}
struct decl* referdecl(struct decl* unary){
        if(unary == NULL) return NULL;
		if(check_is_const(unary) && !check_is_array(unary)){
                printf("%s:%d:error: reference error (const type)\n",read_filename(), read_line());
				return NULL;
		}else if(check_is_string(unary)){
                printf("%s:%d:error: reference error (const type)\n",read_filename(), read_line());
				return NULL;
		}
        struct decl* ptrdecl = NULL;
        ptrdecl = makeconstdecl(makeptrdecl(unary));
        return ptrdecl;
}

struct decl* ptropdecl(struct decl* unary){
        if(unary == NULL) return NULL;
        if(check_is_ptr(unary) == FALSE){
                printf("%s:%d:error: illegal type to pointer('*') operator\n",read_filename(), read_line());
                return NULL;
        }
        struct decl* ptrtype = unary->type;
        return ptrtype->ptrto;
}

struct decl* STRUCTOPdecl(struct decl* unary, struct id* field){
        if(unary == NULL) return NULL;
        if(check_is_ptr(unary) == FALSE){
                printf("%s:%d:error: illegal type to '->' operator\n",read_filename(), read_line());
                return NULL;
        }
        struct decl* ptrtype = unary->type;
        return structaccess(ptrtype->ptrto, field);
}

struct decl* assigndecl(struct decl* unary, struct decl* expr){
        if(unary == NULL || expr == NULL) return NULL;
        if(check_is_var(unary) == FALSE){
                printf("%s:%d:error: assign type error (lvalue must be var)\n",read_filename(), read_line());
                return NULL;
        }
        if(check_compatible(unary, expr)){
                return unary;
        }else if(check_is_ptr(unary) && check_is_array(expr)){
                if(check_compatible(unary->type->ptrto, expr->type->elementvar)){
                        return unary;
                }else {
                        printf("%s:%d:error: assign type error(the type of lvalue and rvalue isn't incompatible)\n",read_filename(), read_line());
                        return NULL;
                }
        }
        else {
                printf("%s:%d:error: assign type error(the type of lvalue and rvalue isn't incompatible)\n",read_filename(), read_line());
                return NULL;
        }
}

struct decl* checkfunctioncall(struct decl* procdecl, struct decl* actuals){
        if(procdecl == NULL) return NULL;
        if(check_is_proc(procdecl) == FALSE){
			                printf("%s:%d:error: illegal function call\n",read_filename(), read_line());
                return NULL;
        }
        struct ste* formals = procdecl->formals;

        if(formals == NULL && actuals == NULL) return procdecl->returndecl;
        else{
                while(formals != NULL && actuals != NULL){
                        if(check_is_var(formals->decl) == FALSE) return NULL;
                        if(check_compatible(formals->decl, actuals) == FALSE)   {
                                printf("%s:%d:error: function call error(actuals don't be matched to params)\n",read_filename(), read_line());
                                return NULL;
                        }
                        else{   formals = formals->prev;
                                actuals = actuals->next;
                        }
                }
                if(formals ==NULL && actuals == NULL)   return procdecl->returndecl;
                else {
                printf("%s:%d:error: function call error(actuals don't be matched to params)\n",read_filename(), read_line());
                        return NULL;
                }
        }
}

int check_compatible(struct decl* decl1, struct decl* decl2){
        if(decl1 == NULL || decl2 == NULL) return 0;
        else if(check_is_int(decl1) && check_is_int(decl2)) return 1;
        else if(check_is_char(decl1) && check_is_char(decl2)) return 1;
        else if(check_is_void(decl1) && check_is_void(decl2)) return 1;
        else if(check_is_array(decl1) && check_is_array(decl2)) return check_compatible(decl1->type->elementvar, decl2->type->elementvar);
        else if(check_is_ptr(decl1) && check_is_ptr(decl2)) return check_compatible(decl1->type->ptrto, decl2->type->ptrto);
        //else if(check_is_struct(decl1) && check_is_struct(decl2)) return check_fieldlist(decl1->type->fieldlist, decl2->type->fieldlist);
        else if(check_is_struct(decl1) && check_is_struct(decl2)) {
                if(decl1->type == decl2->type) return 1;
                else return 0;
        }
        else return 0;
}

int check_fieldlist(struct ste* field1, struct ste* field2){
        if(field1 == NULL && field2 == NULL) return 1;
        else{
                while(field1 != NULL && field2 != NULL){
                        if(!(check_is_var(field1->decl) && check_is_var(field2->decl))) return 0;
                        if(!check_compatible(field1->decl, field2->decl)) return 0;
                        field1 = field1->prev;
                        field2 = field2->prev;
                }
                if(field1 == NULL && field2 == NULL) return 1;
                else return 0;
        }
}

void remove_top_ste(){
		struct ste* top_scope = scope_stack->scope_entry;
		if(top_scope == NULL) return;
		else {
			scope_stack->scope_entry = top_scope->prev;
			return;
		}
}
struct sse* getscopetop(){
	return scope_stack;
}

