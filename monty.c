#include "monty.h"



void push_num(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = line_number;
}

int main(int argc, char **argv)
{
	FILE *monty_file;
	char *buffer = NULL, *command;
	size_t buffer_size = 0;
	stack_t *head;
	unsigned int num;


		head = malloc(sizeof(stack_t));
		head->prev = NULL;

		if (argc != 2)
		{
			write(STDERR_FILENO, "USAGE: monty file,", 18);
			exit(EXIT_FAILURE);
		}


		monty_file = fopen(*(argv + 1), "r");
		if (monty_file == NULL)
		{
			printf("Error: Can't open file %s", *(argv + 1));
			exit(EXIT_FAILURE);
		}


		
		if (feof(monty_file))
			printf("L<line_number>: unknown instruction %s", *(argv + 1));

		while (fgets(buffer, buffer_size, monty_file) != NULL)
		{
			command = strtok(buffer, DELIM);
			if (strcmp(command, "push"))
			{
				num = atoi(strtok(NULL, DELIM));
				if (isdigit(num))
					push_num(&head, num);
				printf("%d\n", head->n);
			}
		}	

		free(head);

		return (0);
}
