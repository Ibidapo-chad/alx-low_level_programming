#include "holberton.h"

/**
 * program concatenates two strings
 * with restricted n bytes
 */

char *_strncat(char *dest, char *src, int n)
{
  /* Declaring variables sl-string length */
  int sl, i, j;
  sl = _strlen(dest);
  for (i = 0; dest == dest + (sl - 1); dest++)
  {
    i++;
    for (j = 0; j < n && *(src + j) != '\0'; src++)
    {
      j++;
      *(dest + (sl - 1) + j = *(src + j);
    }
  }
  return dest;
}
