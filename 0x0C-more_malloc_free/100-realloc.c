#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc -  a function that reallocates a memory block using malloc and free
 * @ptr: pointer to address to old memory address
 * @old_size: unsigned int type to old memory address
 * @new_size: unsigned int type to new memory address
 * Return: pointer to array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
	free(ptr);
	return (s);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
	return (NULL);
	}
	return (ptr);
}
