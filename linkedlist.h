#ifndef LL_H
#define LL_H

typedef struct ll_node {
    void* data;
    struct ll_node* next;
} ll_node_t;

typedef struct ll {
	ll_node_t* head;
	int length;
} ll_t;

// (de)constructor
int ll_init(ll_t* list);
int ll_destroy(ll_t* list);

// insertion
int ll_insert(ll_t* list, void* data, int pos);

// deletion
int ll_delete(ll_t* list, int pos);

// substitution
int ll_substitute(ll_t* list, void* data, int pos);

// reversal
int ll_reverse(ll_t* list);

// lookup
void* ll_lookup(ll_t* list, int pos);

#endif
