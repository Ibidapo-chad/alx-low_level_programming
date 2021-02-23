#include "holberton.h"

/**
 * locates a character in a string
 */

char *_strchr(char *s, char c)
{
  for ( ; ; s++)
  {
    if (*s == c)
      return s;
    if (!*s)
      return NULL;
  }
  return NULL;
}
