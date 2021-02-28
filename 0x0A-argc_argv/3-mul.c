#include "holberton.h"
#include <stdio.h>

/**
 *  program multiplies two numbers
 */

int main(int argc, char *argv[])
{
  /* Let i be index and mul be multiply */
  int i, mul;
  if (argc > 1)
  {
    for (i = 1; i < argc; i++)
    {
      if (!*(argv + i))
      {
	_putchar('E' + 'r' + 'r' + 'o' + 'r');
	_putchar('\n');
	return 1;
      }
      else
      {
	mul = argv[1] + argv[2];
	_putchar(mul);
	_putchar('\n');
      }
    }
  }
  return 0;
}
