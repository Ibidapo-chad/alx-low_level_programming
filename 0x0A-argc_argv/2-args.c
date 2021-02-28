#include "holberton.h"
#include <stdio.h>

/**
 *  main - prints arguments it receives.
 *  @argc: argument count
 *  @argv: argument vector
 *
 *  Return: 0 to terminate program.
 */
int main(int argc, char *argv[])
{
	/* @i: index count */
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar(argv[i]);
		_putchar('\n');
	}
	return (0);
}
