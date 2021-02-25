#include "holberton.h"

int wildcmp(char *s1, char *s2)
{
  int two;
  if(*s1 == ' ')
  {
    two = one(s1 + 1, s2);
    return two;
  }
  if(*s2 == ' ')
  {
    two = one(s1, s2 + 1);
    return two;
  }
  if(*s1 == '\0' && *s2 == '\0')
  {
    return 0;
  }
  if(*s1 == '\0')
  {
    return _strlen_recursion(s2);
  }
  if(*s2 == '\0')
  {
    return _strlen_recursion(s1);
  }
  two=one(s1 + 1, s2 + 1);
  if (*s1 == *s2)
  {
    return two;
  }
  else
    return two+1;
}
