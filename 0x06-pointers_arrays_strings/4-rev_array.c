#include "holberton.h"

/**
 * program reverses the content 
 * of an array of integers
 */

void reverse_array(int *a, int n)
{
  /* a is array and n is the number of elements */
  int i, tmp;
  for (i = 0, n = 0; i < (n / 2) && *(a + n) != 0; i++, n++ )
  {
    tmp = *(a + i);
    *(a + i) = *(a + (n - 1 - i));
    *(a + (n - 1 - i)) = tmp;
  }
  for (i = 0; i < n; i++)
    _putchar(*(a + i));
}
