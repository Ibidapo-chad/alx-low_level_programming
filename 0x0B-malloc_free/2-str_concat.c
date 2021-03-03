#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 *  str_concat - prints name of its file.
 *  @s1: argument string 1
 *  @s2: argument string 2
 *
 *  Return: NULL or pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int h;
	char *result;

	h = _strlen(s1) + _strlen(s2) + 1;
	result = malloc(h * sizeof(char));
	for(i = 0; i < _strlen(s1); i++)
	{
		result[i] = s1[i];
	}

	for(j = i; j < _strlen(s2) + _strlen(s1); j++)
	{
		result[j] = s2[j];
	}
	result[h - 1] = '\0';
	return (result);
}
