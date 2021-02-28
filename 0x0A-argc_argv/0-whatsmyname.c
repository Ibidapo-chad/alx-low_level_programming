#include "holberton.h"
#include <stdio.h>

/**
 *  main - prints name of its file.
 *  @argc: argument count
 *  @argv: argument vector
 *
 *  Return: 0 to terminate program.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s", *(argv + 0));
		printf("\n");
	}
	return (0);
}
