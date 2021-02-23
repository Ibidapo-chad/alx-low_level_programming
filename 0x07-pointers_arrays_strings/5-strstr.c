#include "holberton.h"

/**
 *  locates a substring
 */

char *_strstr(char *haystack, char *needle)
{
  char *a = haystack;
  char *b = needle;
  for ( ; ; )
  {
    if (!*b)
      return (char *) haystack;
    if (!*a)
      return NULL;
    if (*a++ != *b++)
    {
      a = ++haystack;
      b = needle;
    }
  }
  return NULL;
}
