#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: variadic input
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(arg, const unsigned int);
	}
	va_end(arg);
	return (sum);
}
