#include "holberton.h"

/**
 * _isdigit - checks for uppercase characters
 * @c: character to be checked
 * Return: 1 if c is uppercase otherwise 0
 */
int _isdigit(int c)
{
if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
