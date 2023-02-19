#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, d;
for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 9; j++)
{
for (d = j + 1; d < 10; d++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar((d % 10) + '0');
if(i == 7 && j == 8 && d == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

