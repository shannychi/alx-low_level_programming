#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int  print_last_digit(int num)
{
int lastdigit;
lastdigit = (num % 10);
if (lastdigit < 0)
{
lastdigit = (-1 * lastdigit);
}
_putchar(lastdigit + '0');
return (lastdigit);
}

