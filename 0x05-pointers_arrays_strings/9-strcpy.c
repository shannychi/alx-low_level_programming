#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy - a function that copies the string pointed to by src
 *@dest: input
*@src: input
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
