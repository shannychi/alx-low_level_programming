#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that print a string
 * @separator: string to print in between the strings
 * @n:  number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	if (separator == NULL)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			s = "(nil)";
		}
		printf("%s", s);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(args);
}
