#include "main.h"
#include <stdio.h>

/**
 * char *_strchr - a function that locates a character in a string.
 *@s: address
*@c: character
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);
return (NULL);
}
