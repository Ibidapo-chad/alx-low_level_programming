#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/* print_alphabet - prints lowercase alphabet characters*/
void print_alphabet(void)
{
  int ch;
  ch = 'a';
  while (ch <= 'z')
  {
    _putchar(ch);
    ch++;
  }
  _putchar('\n');
  return (0);
}

/* print the alphabet 10 times */
void print_alphabet_x10(void)
{
  int i;
  i = 0;
  while (i <= 9)
  {
    int ch = 'a';
    while (ch <= 'z')
    {
      _putchar(ch);
      ch++;
    }
    _putchar('\n');
    i++;
  }
  return (0);
}

/* checks for lowercase characters */
int _islower(int c)
{
  if (c >= 'a' || c <= 'z')
    return (1);
  else
    return (0);
}

/* checks for alphabetic character */
int _isalpha(int c)
{
  if (c >= 'A' || c <= 'Z')
    return (1);
  else if (c >= 'a' || c <= 'z')
    return (1);
  else
    return (0);
} 

/* prints the sign of a number */
int print_sign(int n)
{
  if (n > 0)
  {
    _putchar('+');
    return (1);
  }
  else if (n = 0)
  {
    _putchar('0');
    return (0);
  }
  else 
  {
    _putchar('-');
    return (-1);
  }
}

/* absolute value funtion */
int _abs(int num)
{
  int abs;
  if (num < 0)
  {
    abs = num * (-1);
    return (abs);
  }
  else
  {
    abs = num;
    return (abs);
  }
}

/* prints last digit of a number */
int print_last_digit(int n)
{
  int n, ld;
  ld = n % 10;
  return (ld);
}
