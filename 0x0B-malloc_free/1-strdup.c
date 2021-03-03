#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  _strdup - prints name of its file.
 *  @str: argument string
 *
 *  Return: NULL or pointer
 */
char *_strdup(char *str)
{
	char *s;
	int index, length;

	if (str == 0)
		return (0);
	length = 0;
	while (*(str + length))
		length++;
	s = (char *)malloc(sizeof(char) * (length + 1));
	if (s == 0)
		return (0);
	for (index = 0; index < length; index++)
		*(s + index) = *(str + index);
	*(s + index) = '\0';
	return (s);
}
