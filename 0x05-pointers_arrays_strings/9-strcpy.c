#include "holberton.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
  while ((*dest = *src) != '\0')
    {  dest++;
      src++;
    }
  return 0;
}
