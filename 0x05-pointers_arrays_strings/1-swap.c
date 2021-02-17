#include "holberton.h"
#include <stdio.h>

void swap_int(int *a, int *b)
{
  int sw;
  sw = *a;
  *a = *b;
  *b = sw;
}
