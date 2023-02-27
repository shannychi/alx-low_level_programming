#include "main.h"

/**
 * print_rev - check the code
 *@s: input
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i = 0;
int f, j;
for (f = 0; s[f] != '\0'; f++)
{
i++;
}
for (j = (i - 1); j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
