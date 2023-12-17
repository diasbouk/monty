#include "monty.h"

/**
 * pall - prints all nodes
 * @head: head of stack
 */
void pall(stack_t *head)
{
  if (head == NULL)
      fprintf(stderr, "Empty stack\n");
  while(head)
  {
    printf("%d\n", head->n);
    head = head->next;
  }
}
