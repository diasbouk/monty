#include "monty.h"

/**
 * add_dnodeint - Adds a node as the head of a list
 * @head: The head of our list
 * @n: New node's data
 * Return: Pointer to the new Head
*/
stack_t *add_node(stack_t **head, const int n)
{
    stack_t *new_node = malloc(sizeof(stack_t));
        if (new_node == NULL)
          return (NULL);
        
        new_node->n = n;
        new_node->prev = NULL;

        new_node->next = *head;


        if (*head != NULL)
          (*head)->prev = new_node;

        *head = new_node;

        return (new_node);
}

