#include "monty.h"

/**
 * st - struct stat to check file existence
 */
struct stat st;


/**
 * main - main finction
 * @argc: arg count
 * @argv: programm arguments
 * Return: 0 if success
 */

int main(int argc, char **argv)
{

	
  FILE *monty_file;
  int current_line = 0;
	char *line = malloc(sizeof(char) * 20);
  


		if (argc != 2)
		{
			write(STDERR_FILENO, "USAGE: monty file", 17);
			exit(EXIT_FAILURE);
		}

		if (stat(*(argv + 1), &st) != 0)
    {
		      fprintf(stderr, "Error: Can't open file %s", *(argv + 1));
          exit(EXIT_FAILURE);
    }


		monty_file = fopen(*(argv + 1), "r");
		while (fgets(line, sizeof(line), monty_file))
		{
          handle_line(line, current_line);
          current_line++;
    }

		fclose(monty_file);

		return (0);
}
