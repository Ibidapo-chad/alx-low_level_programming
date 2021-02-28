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
	int i;
	int add;
	char a, b, c;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			a = printf("%s", *(argv + i));
			if (!*(argv + i))
			{
				printf("0");
				printf("\n");
			}
			else if (a < '0' || a > '9')
			{
				printf("Error");
				printf("\n");
				return (1);
			}
			else
				printf("%s\n", *(argv + i));
		}
		b = printf("%s", *(argv + 1));
		c = printf("%s", *(argv + 2));
		add = b + c;
		printf("%d", add);
	}
	return (0);
}
