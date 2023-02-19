root@5b63e2ff94b2:/alx-low_level_programming/0x01-variables_if_else_while# cat 100-print_comb3.c
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
int i, j;
for (i = '0'; i < '9'; i++)
{
for (j = i + 1; j < '9'; j++)
{
if (j != i)
{
putchar(i);
putchar(j);
if (i == '8' && j == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
