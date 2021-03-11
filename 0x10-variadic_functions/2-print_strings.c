#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: delimiter
 * @n: no of arguments to print
 *
 * Return: a void pointer
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
		printf("%s%s", va_arg(arg, char), ch);
	}
	printf("\n");
	va_end(arg);
}
