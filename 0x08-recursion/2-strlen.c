#include "holberton.h"
#include <stdio.h>

int _strlen(char *s)
{
  char *p = s;
  while (*p != '\0')
    p++;
  return p - s;
}
