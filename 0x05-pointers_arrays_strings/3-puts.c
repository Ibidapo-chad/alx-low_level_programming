#include "holberton.h"

void _puts(char *str)
{
  int i;
  for (i = 0; *str != '\0'; i++)
    _putchar(str[i]);
  _putchar('\n');
}
