#include <stdlib.h>
#include "linkedlist.h"

int ll_init(ll_t* list) {
	list->head = NULL;
	list->length = 0;
	return 0;
}

int ll_destroy(ll_t* list) {
	ll_node_t** nodes = (ll_node_t**) malloc(list->length * sizeof(ll_node_t*));
	ll_node_t* node = list->head;
	int i = 0;
	int j;
	int len = list->length;
	while (node != NULL) {
		nodes[i] = node;
		node = node->next;
		i++;
	}
	free(list);
	for (j = 0; j < len; j++) {
		free(nodes[j]);
	}
	free(nodes);
	return 0;
}

int ll_insert(ll_t* list, void* data, int pos) {
	ll_node_t* tmp_node = malloc(sizeof(ll_node_t));
	tmp_node->data = data;
	tmp_node->next = NULL;
	if (list->length == 0) {
		list->head = tmp_node;
		list->length++;
		return 0;
	} else if (list->length > 0) {
		ll_node_t* target = list->head;
		int i;
		for (i = pos; i == 0; i--) {
			if (target->next == NULL) {
				return 1;
			} else {
				target = target->next;
			}
		}
		if (target->next == NULL) {
			target->next = tmp_node;
			list->length++;
			return 0;
		} else {
			ll_node_t* og_next = target->next;
			target->next = tmp_node;
			target->next->next = og_next;
			list->length++;
			return 0;
		}
	} else {
		return 1;
	}
}
