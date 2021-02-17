#include "holberton.h"
#include <stdio.h>

/** function puts_half
 *  splits the array in the middle and prints
 */
void puts_half(char *str)
{
  /** Declaring variables for string length,
   *  in sl, median(md) and index(i)
   */
  int i, md, sl;
  sl = _strlen(str);
  if (sl % 2 == 0)
  {
    md = sl / 2;
    for (i = md; i < (sl - 1) && *(str + i) != '\0'; i++)
      _putchar(str[i]);
  }
  else
  {
    md = (sl - 1) / 2;
    for (i = md; i < (sl - 1) && *(str + i) != '\0'; i++)
      _putchar(str[i]);
  }
}
