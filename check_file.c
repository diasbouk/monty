#include "monty.h"

/**
 * check_file - Checks arguments when running
 * @ac: argc count
 * @av: argv command arguments
 */
void check_file(int ac, char **av)
{
  struct stat st;
		if (ac != 2)
		{
			    fprintf(stderr, "USAGE: monty file\n");
			    exit(EXIT_FAILURE);
		}

		if (stat(*(av + 1), &st) != 0)
    {
		      fprintf(stderr, "Error: Can't open file %s\n", *(av + 1));
          exit(EXIT_FAILURE);
    }
}
