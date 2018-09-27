#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

int main(void) {
	ll_t* mylist = (ll_t*) malloc(sizeof(ll_t));
	ll_insert(mylist, "Minster\n", 0);
	ll_insert(mylist, "Anders\n", 1);
	ll_insert(mylist, "Greg\n", 1);
	ll_node_t* node = mylist->head;
	while (node != NULL) {
		printf(node->data);
		node = node->next;
	}
	return 0;
}
