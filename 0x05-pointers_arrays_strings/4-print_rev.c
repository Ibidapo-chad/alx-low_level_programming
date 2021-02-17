#include "holberton.h"

void print_rev(char *s)
{
  int i, n;
  n = _strlen(s);
  for (i = n; *(s - i) != '\0'; i--)
    _putchar(*(s - i));
  _putchar('\n');
}
