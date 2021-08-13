#include "holberton.h"

/**
 * _strcmp - checks for uppercase characters
 * @s1: character to be checked
 * @s2: source dest.
 * Return: 1 if c is uppercase otherwise 0
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
