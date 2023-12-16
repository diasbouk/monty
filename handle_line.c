#include "monty.h"

/**
 * handle_line - Handles the instructions in line
 * @line: Line to handle
 * Return: none
 */
void handle_line(char *line, int current_line)
{
        char *token;
        char DELIM[] = "\t \n";


        token = strtok(line, DELIM);
        if (strcmp(token, "push") == 0)
        {
                token = strtok(NULL, DELIM);
                if (isdigit(atoi(token)))
                  printf("%d\n",atoi(token));
                else
                  printf("L%d: usage: push integer\n", current_line);
        }

        else if (strcmp(token , "pall") == 0)
                printf("0");
        else 
          printf(" L%d unknown instruction %s\n", current_line, line);
}
