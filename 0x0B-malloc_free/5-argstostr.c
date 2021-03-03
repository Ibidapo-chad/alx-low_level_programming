#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


/**
 *  free_grid - prints name of its file.
 *  @ac: argument count
 *  @av: argument vector/string input
 *
 *  Return: NULL or pointer
 */
char *argstostr(int ac, char **av)
{
	int i;
	char **arg;
	char *s;

	arg = av;
	arg = malloc(sizeof(char) * ac);
	if (ac == 0 || arg == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		_puts(arg[i]);
	}
	;
	return (s);
}

/**
 *  _puts - program prints string to screen
 *  @s: string array / string literal
 *
 *  Return: break if null or newline if whitespace checks true.
 */
void _puts(char *s)
{
	int i;

		if (*s)
		{
			for (i = 0; ; i++)
			{
				if (_putchar(s[i]) == '\0')
					break;
				if (_putchar(s[i]) == ' ')
					_putchar('\n');
				_putchar(s[i]);
			}
		}

}
