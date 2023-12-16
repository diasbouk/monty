#include "monty.h"

/**
 * handle_line - Handles the instructions in line
 * @line: Line to handle
 * Return: elemnt to push or 0
 */
int handle_line(char *line)
{
        char *token;
        char DELIM[] = "\t \n";


        token = strtok(line, DELIM);
        if (strcmp(token, "push") == 0)
        {
                token = strtok(NULL, DELIM);
                return (atoi(token));
        }

        else if (strcmp(token , "pall") == 0)
                return (0);
        return (222);
}
