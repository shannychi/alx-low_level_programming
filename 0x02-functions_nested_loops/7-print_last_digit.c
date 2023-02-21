#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int  print_last_digit(int num)
{
int lastdigit;
lastdigit = num % 10;
_putchar(lastdigit);
return (lastdigit);
}
