#include "monty.h"


/**
 * main - main finction
 * @argc: arg count
 * @argv: programm arguments
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	
      FILE *monty_file;
      int current_line = 1;
	    char *line = malloc(sizeof(char) * 1024);
      stack_t *head = NULL;



          check_file(argc, argv);


          monty_file = fopen(*(argv + 1), "r");
                  while (fgets(line, sizeof(line), monty_file))
		              {
                      handle_line(head, line, current_line);
                      current_line++;
                  }


		      fclose(monty_file);

		      return (0);
}
