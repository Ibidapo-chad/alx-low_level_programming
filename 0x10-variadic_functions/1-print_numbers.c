#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
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
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		/* for (j = 0; fs[j] != '\0' && j < n - 1; j++)
			ch = printf("%d", fs[j]);
		printf("%d%s", va_arg(arg, int), ch);*/
	}
	printf("\n");
	va_end(arg);
}
