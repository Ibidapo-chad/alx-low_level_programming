#include "holberton.h"

/**
 * _strlen - checks for uppercase characters
 * @s: character to be checked
 * Return: 1 if c is uppercase otherwise 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
