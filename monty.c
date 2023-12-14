#include "monty.h"



void push_num(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = line_number;
}



int main(int argc, char **argv)
{
	(void)argv;

		if (argc != 2)
		{
			write(STDERR_FILENO, "USAGE: monty file", 17);
			exit(EXIT_FAILURE);
		}

		return (0);
}
