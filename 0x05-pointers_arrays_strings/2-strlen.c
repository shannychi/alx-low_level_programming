#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string
 *@s:input
 * Return: Always 0.
 */
int _strlen(char *s)
{
unsigned int n = 0;
while (*s != '\0')
{
n++;
s++;
}
return (n);
}
