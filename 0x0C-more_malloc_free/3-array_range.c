#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: type int
 * @max: type int
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *pt;
	int a;

	if (min > max)
		return (NULL);
	pt = malloc(sizeof(int) * (max - min + 1));
	if (pt == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (min <= max)
	{
		pt[a] = min;
		min++;
		a++;
	}
	return (pt);
}
