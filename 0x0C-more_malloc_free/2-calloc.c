#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;
	unsigned int c;
	if (nmemb == 0 || size == 0)
		return (0);
	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);
	c = 0;
	while (c < nmemb * size)
	{
		pt[c] = 0;
		c++;
	}
	return (pt);
}
