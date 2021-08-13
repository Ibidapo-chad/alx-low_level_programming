#include "holberton.h"

/**
 * _strspn - checks for uppercase characters
 * @s: character to be checked
 * @accept: source dest.
 * Return: 1 if c is uppercase otherwise 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				i++;
				break;
			}
		}
		if (!(*--accept))
		{
			break;
		}
		accept = t;
	}
	return (i);
}
