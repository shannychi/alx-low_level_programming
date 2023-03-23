#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		printf("%s", str == NULL ? "(nil)" : str);
		if (separator == NULL)
			continue;
		else
		{
		if (i == n - 1)
		{
			break;
			printf("%s", separator);
		}
		}
	}
	va_end(args);
	printf('\n');
}
