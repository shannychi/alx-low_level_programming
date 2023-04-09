#include "main.h"

/**
 * get_bit -  a function that returns the value of a bit at a given index.
 * @n: integer
 * @index: index to set 1
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size;
	unsigned long int i;

	size = sizeof(n) * 8 - 1;
	if (index > size)
		return (-1);

	i = 1 << index;
	n = i | n;
	return (1);
}
