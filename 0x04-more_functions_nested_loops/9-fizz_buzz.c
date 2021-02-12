#include "holberton.h"
#include <stdio.h>

int main(void)
{
  int n;
  for (n = 1; n <= 100; n++)
  {
    if (n / 3 == 0)
      printf("Fizz%c", " ");
    else if (n / 5 == 0)
      printf("Buzz%c", " ");
    else
      printf("n%c", " ");
  }
  return (0);
}
