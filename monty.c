#include "monty.h"

int main(int argc, char **argv)
{
	FILE *monty_file;
	
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



}
