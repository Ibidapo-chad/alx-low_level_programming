#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  int a;
  int b;

  a = 98;
  b = 42;
  _putchar('a');
  _putchar(',');
  _putchar(' ');
  _putchar('b');
  swap_int(&a, &b);
  _putchar('a');
  _putchar(',');
  _putchar(' ');
  _putchar('b');
    return (0);
}
