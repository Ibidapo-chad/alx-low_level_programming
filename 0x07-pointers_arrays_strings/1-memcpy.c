#include "holberton.h"

/**
 * copies memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
  int i;
  for (i = 0; i < n; i++)
    dest[i] = src[i];
  return dest;
}
