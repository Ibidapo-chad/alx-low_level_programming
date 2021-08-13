#include "holberton.h"

/**
 * _strpbrk - checks for uppercase characters
 * @s: character to be checked
 * @accept: source dest.
 * Return: 1 if c is uppercase otherwise 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
