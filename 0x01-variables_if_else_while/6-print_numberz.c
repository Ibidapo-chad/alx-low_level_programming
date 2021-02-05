#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
  int ch;
  /* print single digits of base 10*/
  ch = 0;
  while (ch < 10)
  {
    /* Declare putchar */
    putchar(ch);
    putchar('\n');
    ch++;
  }
  return (0);
}
