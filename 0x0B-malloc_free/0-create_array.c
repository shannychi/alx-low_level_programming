#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creste an array of size with c
 * @size: unsigned int type
 * @c: char type
 * Return: Always 0 (success)
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
{
	return (NULL);
}
	s = malloc((size) * sizeof(char));
	if (s == NULL)
{
	return (NULL);
}
i = 0;
while (i < size)
{
	s[i] = c;
i++;
}
s[i] = '\0';
return (s);
}
