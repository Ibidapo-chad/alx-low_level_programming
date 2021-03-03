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
	char *bck;
	int i, len;

	len = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len;
	bck = mallock(sizeof(char*) * (len + 1));
	if (bck == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		bck[i] = str[i];
	bck[len] = '\0';
	return (bck);
}
