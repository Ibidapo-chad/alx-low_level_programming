#include "holberton.h"

/**
 *  prints the sum of two diagonals
 *  of a square matrix
 */

void print_diagsums(int *a, int size)
{
  int i, sum_1, sum_2;
  sum_1 = 0;
  for (i = 0; i < size; i++)
  {
    sum_1 += *(a + ((size * i) + i));
  }
  sum_2 = 0;
  for (i = 0; i < size; i++)
    {
      sum_2 += *(a + ((size * i) - i));
    }
  _putchar(sum_1);
  _putchar(sum_2);
}
