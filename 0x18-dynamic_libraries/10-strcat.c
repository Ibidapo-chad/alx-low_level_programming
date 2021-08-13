#include "holberton.h"

/**
 * _strcat - checks for uppercase characters
 * @dest: character to be checked
 * @src: source dest.
 * Return: 1 if c is uppercase otherwise 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
