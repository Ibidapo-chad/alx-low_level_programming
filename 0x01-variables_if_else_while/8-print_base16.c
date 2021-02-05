#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
  /*print hexadecimal from decimal */
  /* Declare variables */
  int chn, cha;
  chn = 0;
  cha = 'a';
  while ((chn <= 9) || (cha <= 'f'))
  {
    putchar(chn);
    chn++;
 
    if ((cha <= 'f') && (chn > 9))
    {
      while (cha <= 'f')
      {
	putchar(cha);
	putchar('\n');
	cha++;
      }
    }
  }
  return (0);
}
