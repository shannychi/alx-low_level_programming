#include "main.h"
#include <stdio.h>
/**
 * char *_memcpy - a function that copies memory area.
 *@dest: address
 *@src: address
 *@n:size of the memory to print
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *csrc = src;
char *cdest = dest;
unsigned int i;
for (i = 0; i < n; i++)
cdest[i] = csrc[i];
return (cdest);
}
