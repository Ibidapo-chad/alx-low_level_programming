#include "holberton.h"

/**
 *  program prints all arguments it receives
 */

int main(int argc, char *argv[])
{
  int i;
  for (i = 0; i < argc; i++)
  {
    _putchar(argv[i]);
    _putchar('\n');
  }
  return 0;
}
