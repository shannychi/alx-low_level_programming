#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - check code
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
