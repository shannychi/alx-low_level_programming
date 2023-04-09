#include "main.h"

/**
 * get_bit -  a function that returns the value of a bit at a given index.
 * @n: integer
 * @index: index to set 1
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;
	return (i);
}
