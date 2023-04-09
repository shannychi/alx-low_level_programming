#include <stdio.h>
#include "main.h"

/**
 * print_binary -  a function that prints the binary representation of a number
 * @n: unsigned int
 */

void print_binary(unsigned long int n)
{
	signed long int size;
	char b;
	int f;

	size = sizeof(n) * 8 - 1;
	if (n == 0)
	{
		printf("0");
		return;
	}
	if (n == 1)
	{
		printf("1");
		return;
	}
	f = 0;
	while (size >= 0)
	{
		b = (n >> size) & 1;
		if (f == 1)
		{
			_putchar(b + '0');
		}
		else
		{
			if (b == 1)
			{
				_putchar(b + '0');
					f = 1;
			}
		}
		size -= 1;
	}
}
