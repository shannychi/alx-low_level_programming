#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
int times, table, d;
for (times = 0; times <= 9; times++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (table = 1; table <=9; table++)
{
d = (times * table);
if ((d / 10) < 0)
{
_putchar((d / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((d % 10) + '0');
if (table < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
