#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string
 * Return: Always 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j;
	unsigned int i;

	for (j = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			j = (j << 1) | 1;
		}
		else if (b[i] == '0')
		{
			j <<= 1;
		}
		else if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
		return (j);

}
