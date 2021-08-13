#include "holberton.h"

/**
 * _strncpy - checks for uppercase characters
 * @dest: character to be checked
 * @src: source dest.
 * @n: times
 * Return: 1 if c is uppercase otherwise 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
