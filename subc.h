/******************************************************
 * File Name   : subc.h
 * Description 
 *    This is a header file for the subc program.
 ******************************************************/
        
#ifndef __SUBC_H__
#define __SUBC_H__      
                        
#include <stdlib.h>             
#include <stdio.h>              
#include <string.h>    
#include <stdarg.h>

#define CODE_LINE_MAX_SIZE 100 
                        
/* structure for ID */          
struct id {             
      char *name;
      int lextype;
};              
                
//scope stack entry     
struct sse {    
        struct ste      *scope_entry;
        struct sse      *prev;
};

struct ste {
        struct id       *name;
        struct decl     *decl;
	int 			offset;
        struct ste      *prev;
};      
        
// for declclass
#define VAR_DECL 1
#define CONST_DECL 2
#define FUNC_DECL 3
#define TYPE_DECL 4
        
// for typeclass
#define INT_TYPE 1
#define CHAR_TYPE 2
#define VOID_TYPE 3
#define ARRAY_TYPE 4
#define PTR_TYPE 5
#define STRUCT_TYPE 6   
                        
struct decl {           
        int             declclass;
        struct decl     *type;          //VAR, CONST
        int             value;          //CONST
        char*           string_value;   //CONST
        struct ste      *formals;       //FUNC
        struct decl     *returndecl;    //FUNC
	int             typeclass;      //TYPE
        struct decl     *elementvar;    //TYPE ARRAY
        int             num_index;      //TYPE ARRAY
        struct ste      *fieldlist;     //TYPE STRUCT
        struct decl     *ptrto;         //TYPE POINTER
        int             size;           //TYPE DECL
        int             offset;         //VAR DECL
        struct ste      **scope;        //VAR
        struct decl     *next;          //ALL
};

/* For func code_gen */
char* func_name;
char* called_func_name;
int block_num;
int string_num;
char code_gen[CODE_LINE_MAX_SIZE];

/* For hash table */
unsigned hash(char *name);
struct id *enter(int lextype, char *name, int length);
struct id *lookup(char *name);

/* For scope operation */
static struct sse       *scope_stack;
void push_scope();
struct ste* pop_scope();
struct ste* st_insert(struct id* name, struct decl* decl);
struct ste* st_lookup(struct id* name);
struct ste* st_lookup_in_scope(struct ste* scope, struct id* name);

/* For struct operation */
struct ste* declare_struct(struct id* name, struct decl* structdecl);
struct ste* struct_insert(struct id* name, struct decl* structdecl);
struct ste* struct_lookup(struct id*name);
struct decl* findcurrentdecl_struct(struct id* name);

/* For struct insert & lookup */
struct ste* struct_insert(struct id* name, struct decl* decl);
struct ste* struct_lookup(struct id* name);

/* For semantic */
void init_type();
struct ste* declare(struct id* id, struct decl* decl);
struct decl* maketypedecl(int type);
struct decl* makevardecl(struct decl* typedecl);
struct decl* makearraydecl(int size, struct decl* ElementVarDecl);
struct decl* makeconstdecl(struct decl* typedecl);
struct decl* makenumconstdecl(struct decl* typedecl, int int_value);
struct decl* makecharconstdecl(struct decl* typedecl, char* char_value);
struct decl* makestringconstdecl(struct decl* typedecl, char* string);
struct decl* makeptrdecl(struct decl* typedecl);
struct decl* makestructdecl(struct ste* fields);
struct decl* makeprocdecl();

struct decl* findcurrentdecl(struct id* id);

void pushstelist(struct ste* formals);
int check_is_type(struct decl* declptr);
int check_is_var(struct decl* declptr);
int check_is_const(struct decl* declptr);
int check_is_int(struct decl* declptr);
int check_is_char(struct decl* declptr);
int check_is_ptr(struct decl* declptr);
int check_is_struct(struct decl* declptr);
int check_is_struct_type(struct decl* typeptr);
int check_is_array(struct decl* declptr);
int check_is_proc(struct decl* declptr);
int check_compatible(struct decl* decl1, struct decl* decl2);

struct decl* INCOPDECOPdecl(struct decl* structdecl, int i);
struct decl* structaccess(struct decl* structdecl, struct id* ID);
struct decl* arrayaccess(struct decl* arraydecl, struct decl* IndexVarOrConstDecl);
struct decl* plusdecl(struct decl* decl1, struct decl* decl2);
struct decl* minusdecl(struct decl* decl1, struct decl* decl2);
struct decl* relopdecl(struct decl* decl1, struct decl* decl2);
struct decl* equopdecl(struct decl* decl1, struct decl* decl2);
struct decl* logicalopdecl(struct decl* decl1, struct decl* decl2);
struct decl* referdecl(struct decl* decl);
struct decl* ptropdecl(struct decl* decl);
struct decl* STRUCTOPdecl(struct decl* decl1, struct id* decl2);
struct decl* assigndecl(struct decl* unary, struct decl* expr);

struct decl* checkfunctioncall(struct decl* procptr, struct decl* actuals);

struct decl* inttype;
struct decl* chartype;
struct decl* voidtype;
struct id*   returnid;

int read_line();
char* read_filename();
int yyprint(const char* format, ...);
struct sse* getscopetop();

#endif
