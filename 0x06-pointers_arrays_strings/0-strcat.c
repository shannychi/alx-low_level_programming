#include "main.h"
#include <stdio.h>

/**
 *char *_strcat -  a function that concatenates two strings.
 *@dest: input
 *@src:input
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
size_t i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
