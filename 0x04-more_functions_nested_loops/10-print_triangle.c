#include "main.h"

/**
 *print_triangle - check the code
 *@size: single letter input
 * Return: Always 0.
 */
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (j = 0; j <= (size - 1); j++)
{
for (i = 0; i < (size - 1) - j; i++)
{
_putchar(' ');
}
for (k = 0; k <= j; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
