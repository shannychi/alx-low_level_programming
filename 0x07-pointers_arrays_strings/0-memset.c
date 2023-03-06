#include "main.h"
#include <stdio.h>
/**
 *char *_memset -  a function that fills memory with a constant byte
 *@s: the address of the memeroy to print
 *@b: the value to be  filled
 *@n: number of bytes to be filled
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i ++)
s[i] = b;
return (s);
}
