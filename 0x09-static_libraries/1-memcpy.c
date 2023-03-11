#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memcpy - function that copies value
 * @dest: input
 * @src: input
 *@n: input
 *Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));
}
