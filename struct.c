/*
 * File Name   : struct.c
 * Description : struct operation
 */     

#include "subc.h"

static struct ste* ss;  //struct stack;
        
struct ste* declare_struct(struct id* name, struct decl* structdecl){
        if(structdecl == NULL) return NULL;
        if(st_lookup_in_scope(ss,name)!=NULL) {
                printf("%s:%d:error: struct redeclaration('%s')\n",read_filename(), read_line(),name->name);
                return NULL;
        }

        return struct_insert(name,structdecl);
}       
        
struct ste* struct_insert(struct id* name, struct decl* structdecl){
        struct ste* ret_ste;
        ret_ste = (struct ste*) malloc(sizeof(struct ste));
        ret_ste->name = name;
        ret_ste->decl = structdecl;
        ret_ste->prev = ss;
        
        ss = ret_ste;
        
        return ret_ste;
}
        
struct ste* struct_lookup(struct id*name){
        struct ste* ret_ste;
        if(ret_ste = st_lookup_in_scope(ss, name)) {
                return ret_ste;
        }       
        return NULL;
}       
        
struct decl* findcurrentdecl_struct(struct id* name){
        struct ste* currentdecl = struct_lookup(name);
        if(currentdecl) return currentdecl->decl;
        else {
                printf("%s:%d:error: Undefined struct('%s')\n",read_filename(), read_line(),name->name);
                return NULL;
        
        }
}