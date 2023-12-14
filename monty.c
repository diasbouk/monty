#include "monty.h"

/**
 * push_num - puts a num into a stack
 * @stack: stack to manip
 * @line_number: num to push
 */

void push_num(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = line_number;
}

/**
 * main - main finction
 * @argc: arg count
 * @argv: programm arguments
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	struct stat st;


		if (argc != 2)
		{
			write(STDERR_FILENO, "USAGE: monty file", 17);
			exit(EXIT_FAILURE);
		}

		if (stat(*(argv + 1), &st) != 0)
			fprintf(stderr, "Error: Can't open file %s", *(argv + 1));
		return (0);
}
