#include "holberton.h"

/**
 *  Capitalizes all words of a string
 */

char *cap_string(char *)
{
  int i;
  int n;
  char *s = *;
  for (i = 0; *(s + i) != '\0'; i++)
  {
    if (s == 0)
    {
      if (*s >= 97 || *s <= 122)
      {
	*s = *s + 32;
	return *s;
      }
      else
	return *s;
    }
    else if (s[i] == ' ' || s[i] == '\t' ||  s[i] == '\n' ||  s[i] == ','  s[i] == ';' ||  s[i] == '.' ||  s[i] == '!' ||  s[i] == '?' ||  s[i] == '"' ||  s[i] == '(' ||  s[i] == ')' ||  s[i] == '{' ||  s[i] == '}')
    {
      n = i + 1;
      s[n] = *(s + n);
      s[n] = s[n] + 32;
      return s[n];
    }
  }
}
