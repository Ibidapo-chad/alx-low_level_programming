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
	/**
	 *  @i: index count
	 *  @mul: multiplies argument
	 */
	int i, mul;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!*(argv + i))
			{
				printf("Error");
				printf("\n");
				return (1);
			}
			else
			{
				mul = argv[1] * argv[2];
				printf("%d", mul);
				printf("\n");
			}
		}
	}
	return (0);
}
