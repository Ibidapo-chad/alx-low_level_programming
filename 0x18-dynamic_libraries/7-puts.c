#include "holberton.h"

/**
 * _puts - checks for uppercase characters
 * @c: character to be checked
 * Return: 1 if c is uppercase otherwise 0
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
