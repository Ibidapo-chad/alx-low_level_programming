#include "holberton.h"

/**
 * _abs - checks for uppercase characters
 * @c: character to be checked
 * Return: 1 if c is uppercase otherwise 0
 */
int _abs(int c)
{
if (c > 0)
	{
		c = c;
	}
	else if (c < 0)
	{
		c = -c;
	}
	else if (c == 0)
	{
		c = 0;
	}
	return (c);
}
