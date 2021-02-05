#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
  int lch;
  int uch;
  /* print lowercase and uppercase letters*/
  lch ='a';
  uch ='A';
  if (lch <= 'z')
  {
    while (lch <= 'z')
    { 
      /* Declaring function putchar */
      putchar(lch);
      lch++;
    }
  }
  else
  {
    while (uch <= 'Z')
    { 
      putchar(uch);
      uch++;
    }
  }
  return (0);
}
