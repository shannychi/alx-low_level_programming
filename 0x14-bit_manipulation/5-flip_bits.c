#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * @n: int
 * @m: int
 * Return: number of bit needed to flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned int k;

	i = 0;
	k = 0;
	while (i <= 63)
	{
		if ((n & 1) != (m & 1))
			k++;

	n = n >> 1;
	m = m >> 1;

	i++;
	}
	return (k);
}
