#include "main.h"

/**
 * print_times_table - check the code.
 *@n: single letter input
 * Return: Always 0.
 */
void print_times_table(int n)
{
int j, k, f;
if (n >= 0 && n <= 15)
{
for (j = 0; j <= n; j++)
{
_putchar('0');
for (k = 1; k <= n; k++)
{
_putchar(',');
_putchar(' ');
f = j * k;
if (f <= 99)
_putchar(' ');
if (f <= 9)
_putchar(' ');
if (f >= 100)
{
_putchar((f / 100) + '0');
_putchar(((f / 10) % 10) + '0');
}
else if (f <= 99 && f >= 10)
{
_putchar((f / 10) + '0');
}
_putchar((f % 10) + '0');
}
_putchar('\n');
}
}
}
