#include "holberton.h"

/**
 *  prints the chessboard
 */

void print_chessboard(char (*a)[8])
{
  int i, j, n = 8;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      _putchar(a[i][j]);
    }
    _putchar('\n');
  }
}
