#include "holberton.h"

/**
 * _strchr - checks for uppercase characters
 * @s: character to be checked
 * @c: source dest.
 * Return: 1 if c is uppercase otherwise 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
