#include "main.h"

/**
 * print_number - check the code
 *@n: single input letter
 * Return: Always 0.
 */
void print_number(int n)
{
unsigned int i = n;
if (n < 0)
{
n *= -1;
i = n;
_putchar('-');
}
i /= 10;
if (i != 0)
print_number(i);
_putchar((unsigned int) n % 10 + '0');
}
