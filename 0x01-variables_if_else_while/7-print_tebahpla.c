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
for (i = 'Z'; i >= 'A'; i--)
putchar(i);
putchar('\n');
return (0);
}
