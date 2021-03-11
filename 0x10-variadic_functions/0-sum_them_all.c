#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all parameters
 * @n: no of arguments to sum
 *
 * Return: an integer value
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned i, sum;
	va_list arg;

	va_start(arg, n);
	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(arg, unsigned int);
	va_end(arg);
	return (sum);
}
