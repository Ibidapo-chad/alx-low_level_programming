#include "holberton.h"
#include <stdio.h>

/**
 * main 
 *
 * Return: Always 0.
 */
int main(void)
{
  int n, *k;

  n = 402;
  printf("n=%d\n", n);
  k = &n;
  *k = 98;
  reset_to_98(&n);
  _putchar('n');
  return (0);
}
