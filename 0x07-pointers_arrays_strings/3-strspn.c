#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 *@s: address
*@accept: address
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
int c = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
c++;
}
}
else
return (c);
}
return (c);
}
