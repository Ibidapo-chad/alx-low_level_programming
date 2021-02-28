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
	int i;
	int mul;
	char a, b;

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
				a = printf("%s", argv[1]);
				b = printf("%s", argv[2]);
				mul = a * b;
				printf("%d", mul);
				printf("\n");
			}
		}
	}
	return (0);
}
