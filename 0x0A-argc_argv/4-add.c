#include "holberton.h"
#include <stdio.h>

/**
 *  program adds positive numbers
 */

int main(int argc, char *argv[])
{
  /* Declaring variables */
  int add, i;
  if (argc > 1)
  {
    for (i = 1; i < argc; i++)
    {
      if (!*(argv + i))
      {
	_putchar('0');
	_putchar('\n');
      }
      else if (argv[i] < '0' || argv[i] > '9')
      {
	_putchar('E' + 'r' + 'r' + 'o' + 'r');
	_putchar('\n');
	return 1;
      }
      else
      {
	add = argv[1] + argv[2];
	_putchar(add);
	return 0;
      }
    }
  }
  return 0;
}
