#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - function to fill a block of memory with a particular value
 * @s: memory
 * @b: input
 * @n: input
 * Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
