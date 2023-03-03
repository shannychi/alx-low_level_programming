#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
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
