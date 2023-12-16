#include "monty.h"

stack_t *add_node(stack_t *head, int n)
{
	      stack_t *new_node = malloc(sizeof(stack_t));
	            if (!new_node)
		                puts("Stack overflow\n");
	            new_node->n = n;
	            new_node->next = head;
	            new_node->prev = NULL;


              head->prev = new_node;

              return (new_node);
}
