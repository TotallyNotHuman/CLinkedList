#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(void) {
	ll_t* mylist = (ll_t*) malloc(sizeof(ll_t));
	ll_init(mylist);
	ll_insert(mylist, "Minster\n", 0);
	ll_insert(mylist, "Anders\n", 1);
	ll_insert(mylist, "Greg\n", 1);
	printf("%s", ll_lookup(mylist, 0));
	printf("%s", ll_lookup(mylist, 1));
	printf("%s", ll_lookup(mylist, 2));
	printf("\n");
	ll_delete(mylist, 0);
	printf("%s", ll_lookup(mylist, 0));
	printf("%s", ll_lookup(mylist, 1));
	printf("%s", ll_lookup(mylist, 2));
	printf("\n");
	ll_substitute(mylist, "Grog\n", 0);
	printf("%s", ll_lookup(mylist, 0));
	printf("%s", ll_lookup(mylist, 1));
	printf("\n");
	ll_reverse(mylist);
	printf("%s", ll_lookup(mylist, 0));
	printf("%s", ll_lookup(mylist, 1));
	printf("\n");
	ll_destroy(mylist);
	return 0;
}
