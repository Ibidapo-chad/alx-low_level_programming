#include "holberton.h"
#include <stdio.h>

void rev_string(char *s)
{
  int i, n;
  n = _strlen(s);
  for (i = n; *(s - i) != '\0'; i--)
    _putchar(*(s - i));
}
