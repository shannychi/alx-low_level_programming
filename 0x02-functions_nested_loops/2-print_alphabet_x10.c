#include "main.h"

/**
 * print_alphabet_x10 - a function that print alphalbet_x10
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i, num;
num = 0;
while (num < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
num++;
_putchar('\n');
}
}
