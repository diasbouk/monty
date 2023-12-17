#include "monty.h"

int isnum(char *string)
{
  int n = 0;
  while (string[n])
  {
    if (isdigit(string[n]) == 0)
      return (0);
    n++;
  }
  return (1);
}
