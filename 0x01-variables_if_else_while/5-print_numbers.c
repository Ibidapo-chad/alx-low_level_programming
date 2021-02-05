#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
  int dits;
  /* print single digit numbers of base 10 */
  dits = 0;
  while (dits < 10)
  {
    /* Declare printf */
    printf("%d\n", dits++);
  }
  return (0);
}
