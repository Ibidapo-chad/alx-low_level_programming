#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  char s1[98];
  char *p;
  /* where n is size of array */
  int n = 98;

  p = _strcpy(s1, "First, solve the problem. Then, write the code\n");
  int i;
  for (i = 0; i < n; i++)
    _putchar(s1[i]);
  for (i = 0; *p != '\0'; i++)
    _putchar(p[i]);
  return (0);
}
