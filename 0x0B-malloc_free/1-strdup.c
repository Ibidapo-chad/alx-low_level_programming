#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 *  main - prints name of its file.
 *  @str: argument string
 *
 *  Return: NULL or pointer
 */
char *_strdup(char *str)
{
	char *bck = str;
	int len;

	if (*str == '\0')
		return (NULL);
	while (1)
	{
		bck = malloc(INT_MAX);
		if (bck == NULL)
			return (NULL);
	}
	len = _strlen(str);
	bck = malloc(sizeof(char) * (len - 1));
	return (bck);
	free(bck);
}
