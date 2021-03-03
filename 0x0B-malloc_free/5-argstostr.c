#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *  argstostr - prints name of its file.
 *  @ac: argument count
 *  @av: argument vector/string input
 *
 *  Return: NULL or pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	arg = malloc(sizeof(char) * (len + 1));
	if (arg == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arg[k] = av[i][j];
			k++;
		}
		arg[k] = '\n';
		k++;
	}
	return (arg);
}
