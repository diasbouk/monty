#include "monty.h"






/**
 * handle_line - Handles the instructions in line
 * @line: Line to handle
 * Return: none
 */
void handle_line(stack_t *head, char *line, int current_line)
{
        char *token;


        token = strtok(line, DELIM);
        if (strcmp(token, "push") == 0)
        {
                token = strtok(NULL, DELIM);
                if (isdigit(atoi(token)))
                    head = add_node(head, atoi(token));
                else
                    printf("L%d: usage: push integer\n", current_line);
        }

        else if (strcmp(token , "pall") == 0)
          pall(head);
        else 
          printf(" L%d unknown instruction %s\n", current_line, line);
}
