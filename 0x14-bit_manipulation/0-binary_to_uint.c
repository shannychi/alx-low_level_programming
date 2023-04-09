#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string
 * Return: Always 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 1;
	unsigned int i = 0;
	unsigned int len;
	int c;

	len = strlen(b);
	for (c = len - 1; c >= 0; c--)
	{
		if (c[b] != '0' && c[b] != '1')
			return (0);
		if (c[b] == '1')
		{
			i += j;
		}
		j *= 2;
	}
	return (i);
}
