#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  str_concat - concatenates two strings.
 *  @s1: argument string 1
 *  @s2: argument string 2
 *
 *  Return: NULL or pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, m;
	char *s;
	/* total length of variables k, m and 1 */
	int len;

	if (s1 == NULL)
		return("");
	if (s2 == NULL)
		return ("");
	for (k = 0; s1[k] != '\0'; k++)
		k++;
	for (m = 0; s2[m] != '\0'; m++)
		m++;
	len = k + m + 1;
	s = malloc(sizeof(char) * len);
	for (i = 0; s1[i] < len; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] < len; j++)
		s[i + k] = s2[j];
	s[len] = '\0';
	return (s);
}
