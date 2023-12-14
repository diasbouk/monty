#include "monty.h"


void check_instuct(instruction_t inst, char *opcode)
{
	char *part_1, *part_2;
	if (!opcode)
		write(STDERR_FILENO, "Invalide instruction", 20);
	part_1 = strtok(opcode, DELIM);
	part_2 = strtok(NULL, DELIM);
	if (strcmp(part_1, "push") == 0)
		if (isdigit(atoi(part_2)))
			atoi(part_2);
}
void push_num(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = line_number;
}

int main(int argc, char **argv)
{
	FILE *monty_file;
	char *buffer;
	size_t buffer_size;
	int num_chars;
	instruction_t push, pall;
	stack_t **stack;
	unsigned int num;


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


		num_chars = getline(&buffer, &buffer_size, monty_file);
		if (num_chars == -1)
			printf("L<line_number>: unknown instruction %s", buffer);

		if (strcmp(strtok(buffer, DELIM), "push") == 0)
		{
			num = atoi(strtok(NULL, DELIM));
			if (isdigit(num))
				push_num(stack, num);
			printf("%d\n", (*stack)->n);
		}
}
