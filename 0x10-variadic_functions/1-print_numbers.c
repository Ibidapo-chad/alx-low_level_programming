#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator:delimiter
 * @n:no of arguments to print
 *
 * Return: a void pointer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, j;
	char *fs = separator;
	char ch;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; fs[j] != '\0'; j++)
			ch = printf("%s", fs[j]);
		printf("%d%s", va_arg(arg, unsigned int), ch);
	}
	printf("\n");
	va_end(arg);
}
