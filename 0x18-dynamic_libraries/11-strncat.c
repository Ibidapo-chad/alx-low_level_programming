#include "holberton.h"

/**
 * _strcat - checks for uppercase characters
 * @dest: character to be checked
 * @src: source dest.
 * @n: no of times
 * Return: 1 if c is uppercase otherwise 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length, j;

	length = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
