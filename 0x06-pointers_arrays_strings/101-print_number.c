#include "main.h"
#include <stdio.h>
/**
 * print_number - a function that prints an integer
 *@n: input
 * Return: Always 0.
 */
void print_number(int n)
{
if (n / 10 != 0)
{
_putchar(n % 10);
print_number((n - n % 10) / 10);
}
}
