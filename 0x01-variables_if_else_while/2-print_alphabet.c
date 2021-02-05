#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
  int ch;
  /* print lowercase letters*/
  ch = 'a';
  while (ch <= 'z')
  {
    putchar(ch);
    putchar('\n');
    ch++;
  }
  return (0);
}
