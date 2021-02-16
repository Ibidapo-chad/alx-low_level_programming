#include <stdio.h>
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
  return;
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
  return;
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
  if ((n > 0))
  {
    _putchar('+');
    return (1);
  }
  else if ((n = 0))
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
  int ld;
  ld = n % 10;
  return (ld);
}

/* 9 times table */
void times_table(void)
{
  int n, m;
  n = 0;
  while (n <= 9)
  {
    m = 0;
    while (m <= 9)
    {
      int mult;
      mult = (n * m);
      _putchar(mult);
      m++;
    }
    _putchar(n);   
    n++;
    _putchar('\n');
  }
    return;
}

/* adding integers */
int add(int a, int b)
{
  int sum;
  sum = a + b;
  return (sum);
} 

/* print natural numbers */
void print_to_98(int n)
{
  if (n <= 98)
  {
    while (n <= 98)
    {
      printf("%d", n);
      putchar(',');
      putchar(' ');
      n++;
    }
  }
  else 
  {
    while (n >= 98)
    {
      printf("%d", n);
      putchar(',');
      putchar(' ');
      n++;
    }
  }
  return;
}

/* more functions */
int _isupper(int c)
{
  c = 'A';
  while (c <= 'Z')
  {
    if (c <= 'Z')
      return (1);
    else
      return (0);
    c++;
  }
  return 0;
}

int _isdigit(int c)
{
  c = 0;
  while (c <= 9)
  {
    if (c <= 9)
      return (1);
    else 
      return (0);
    c++;
  }
  return 0;
}

int mul(int a, int b)
{
  int res;
  res = a * b;
  return (res);
}

void print_numbers(void)
{
  int j;
  j = 0;
  while (j <= 9)
  {
    _putchar(j);
    j++;
  }
  _putchar('\n');
}

void print_most_numbers(void)
{
  int j = 0;
  while (j <= 9)
  {
    if (j == 2 || j == 4)
      continue;
    else
      _putchar(j);
    j++;
    _putchar('\n');
  }
}

/* more numbers */
void more_numbers(void)
{
  int i, j;
  i = 0;
  while (i <= 14)
  {
    while (j <= 14)
    {
      _putchar(j);
      j++;
    }
    i++;
    _putchar('\n');
  }
  return;
}

/* 06 Draw a straight line */
void print_line(int n)
{
  if (n <= 0)
    _putchar('\n');
  else
  {
    int j = 1;
    while (j <= n)
    {
      _putchar('_');
      j++;
    }
  }
}

/* 07 Draw a diagonal line */
void print_diagonal(int n)
{
  int i, j;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      if (n <= 0)
	_putchar('\n');
      else if (i == j)
    	_putchar('\\');
      else
	_putchar(' ');
    }
  }
}

/* 08 Print a square */
void print_square(int size)
{
  if (size <= 0)
    _putchar('\n');
  else
  {
    int i;
    for (i = 1; i <= size; i++)
    {
      int j;
      for (j = 1; j <= size; j++)
      {
	_putchar('#');
      }
      _putchar('#');
    }
  }
}

/* Passing a pointer as an argument */


