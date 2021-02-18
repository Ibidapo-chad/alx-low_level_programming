#include "holberton.h"
/**
 * Program defines concatenation 
 * of two strings
 */
char *_strcat(char *dest, char *src)
{
  /* Declaring variables sl-string length */
  int sl, i, j;
  sl = _strlen(dest);
  for (i = 0; dest == dest + (sl - 1); dest++)
  {
    i++;
    for (j = 0; *(src + j) != '\0'; src++)
    {
      j++;
      *(dest + (sl - 1) + j = *(src + j);
    }
  }
  return dest;
}

