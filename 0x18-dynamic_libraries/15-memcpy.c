#include "holberton.h"

/**
 * _memcpy - checks for uppercase characters
 * @dest: character to be checked
 * @src: source dest.
 * @n: times
 * Return: 1 if c is uppercase otherwise 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
