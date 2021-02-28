#include "holberton.h"
#include <stdio.h>

/**
 *  main - prints name of its file.
 *  @argc: argument count
 *  @argv: argument vector
 *
 *  Return: 0 or 1 if it satisfies a condition to terminate program.
 */

int main(int argc, char *argv[])
{
	/**
	 *  @add: adds arguments
	 *  @i: index count
	 */
	int add, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!*(argv + i))
			{
				printf("0");
				printf("\n");
			}
			else if (argv[i] < '0' || argv[i] > '9')
			{
				printf("Error");
				printf("\n");
				return (1);
			}
			else
			{
				add = argv[1] + argv[2];
				printf("%d", add);
				return (0);
			}
		}
	}
	return (0);
}
