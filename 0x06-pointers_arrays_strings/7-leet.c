#include "holberton.h"

/**
 * encoding strings into 1337
 */

char *leet(char *)
{
  char *s = *;
  int i;
  for (i = 0; *(s + i) != '\0'; i++ )
  {
    if (s[i] == 'a' || s[i] == 'A')
    {
      s[i] = 4;
      return s[i];
    }
    else if (s[i] == 'e' || s[i] == 'E')
    {
      s[i] = 3;
      return s[i];
    }
    else if (s[i] == 'o' || s[i] == 'O')
    {
      s[i] = 0;
      return s[i];
    }
    else if (s[i] == 't' || s[i] == 'T')
    {
      s[i] = 7;
      return s[i];
    }
    else if (s[i] == 'l' || s[i] == 'L')
    {
      s[i] = 1;
      return s[i];
    }
    _putchar(*(s + i));
  }
  return *s;
}
