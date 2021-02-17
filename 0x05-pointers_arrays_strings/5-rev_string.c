#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  int i;
  /* where n is size of array */
  int n = 10; 
  char s[10] = "Holberton";
  for (i = 0; i < n; i++)
    _putchar(s[i]);
  rev_string(s);
  for (i = 0; i < n; i++)
    _putchar(s[i]);
    return (0);
}
