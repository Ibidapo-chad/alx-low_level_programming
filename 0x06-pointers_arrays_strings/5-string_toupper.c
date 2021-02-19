#include "holberton.h"

/**
 * program changes lowercase letters to uppercase letters
 * 
 */

char *string_toupper(char *)
{
  char *p = *;
  int i;
  for (i = 0; *(p + i) != '\0'; i++)
  {
    if (*(p + i) >= 97 || *(p + i) <= 122)
      *(p + i) = *(p + i) + 32;
      return *(p + i);
    _putchar(*(p + i));
  }
  return *(p + i);
}
