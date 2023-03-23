#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers
 * @separator: strings be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(args, const unsigned int));

	if (separator == NULL)
		continue;
	else
	{
		if (i == n - 1)
		break;
		printf("%s", separator);
	}
}
	va_end(args);
	printf("\n");
}
