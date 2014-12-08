/***************************************************************
 * File Name    : hash.c
 * Description
 *      This is an implementation file for the open hash table.
 *
 ****************************************************************/

#include "subc.h"

#define  HASH_TABLE_SIZE   101

struct nlist {
   struct nlist *next;
   struct id *data;
};

static struct nlist *hashTable[HASH_TABLE_SIZE];

#define MULTIPLIER 17
unsigned hash(char *name) {
   /* implementation is given here */

	unsigned const char *us;
	unsigned long h;

	h=0;

	for(us = (unsigned const char*) name; *us; us++) {
		h = h * MULTIPLIER + *us;
	}

	return h % HASH_TABLE_SIZE;
}

struct id *enter(int lextype, char *name, int length) {
   /* implementation is given here */

	unsigned long entry_number = (unsigned long) hash(name);

	struct id* entry_data;

	if((entry_data = lookup(name)) != NULL) return entry_data;

	struct nlist* entry = (struct nlist *) malloc(sizeof(struct nlist));
	entry_data = (struct id *) malloc(sizeof(struct id));
	entry_data->name = strdup(name);
	entry_data->lextype = lextype;

	entry->next = hashTable[entry_number];
	entry->data = entry_data;

	hashTable[entry_number] = entry;

	return entry_data;
}

struct id *lookup(char *name) {
   /* implementation is given here */

	unsigned long entry_number = (unsigned long) hash(name);

	struct nlist* entry_temp;

	for(entry_temp = hashTable[entry_number]; entry_temp!=NULL; entry_temp = entry_temp->next){
		if(strcmp((entry_temp->data)->name, name) == 0 ) //equal
			return entry_temp->data;
	}

	return NULL;
}
