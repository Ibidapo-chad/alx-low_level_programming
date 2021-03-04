#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  string_nconcat - allocates memory
 *  @s1: first string
 *  @s2: second string
 *  @n: no of bytes to concat
 *
 *  Return: a char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *cat;
	unsigned int len, s1_len, s2_len;

	if (!s1 || !s2)
		return ("");
	else
	{
		s1_len = 0;
		s2_len = 0;
		for (i = 0; s1[i] != '\0'; i++)
			s1_len++;
		for (j = 0; s2[j] != '\0'; j++)
			s2_len++;
		len = s1_len + n + 1;
		cat = malloc(len * sizeof(char));
		if (!cat)
			return (NULL);
		for (i = 0; s1[i] != '\0'; i++)
			*(cat + i) = *(s1 + i);
		if (n < s2_len)
		{
			for (j = 0; j < n && s2[j] != '\0'; j++)
				cat[j + (s1_len - 1)] = s2[j];
		}
		else
			for (j = 0; s2[j] != '\0'; j++)
				cat[j + (s1_len - 1)] = s2[j];
		cat[len] = '\0';
	}
	return (cat);
}
