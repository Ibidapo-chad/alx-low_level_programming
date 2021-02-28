#include "holberton.h"
#include <stdio.h>

/**
 *  main - prints number of arguments.
 *  @argc: argument count
 *  @argv: argument vector
 *
 *  Return: 0 to terminate program.
 */
int main(int argc, char *argv[])
{
	if (*argv)
	{
	printf("%d", argc);
	printf("\n");
	}
	return (0);
}
