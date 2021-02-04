#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
  int lch;
  int uch;
  /* print lowercase and uppercase letters*/
  lch ='a';
  uch ='A';
  while (lch <= 'z' && uch <= 'Z')
  {
    putchar(lch);
    putchar(uch);
    putchar('\n');
  }
  lch++;
  uch++;
  return (0);
}
