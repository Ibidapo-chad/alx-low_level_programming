#include "holberton.h"

/**
 * program copies a string
 * 
 */

char *_strncpy(char *dest, char *src, int n)
{
  int i;
  i = 0;
  while (((dest[i] = src[i]) != '\0') && i <= n)
  {
    i++;
    _putchar(*(dest + i));
  }
  return 0;
}
