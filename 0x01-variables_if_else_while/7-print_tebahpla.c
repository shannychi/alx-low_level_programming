root@5b63e2ff94b2:/alx-low_level_programming/0x01-variables_if_else_while# cat 7-print_tebahpla.c
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
int i;
for (i = 'z'; i >= 'a'; i--)
putchar(i);
putchar('\n');
return (0);
}
