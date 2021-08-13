#include "holberton.h"

/**
 * _memset - checks for uppercase characters
 * @s: character to be checked
 * @b: source dest.
 * @n: times
 * Return: 1 if c is uppercase otherwise 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
