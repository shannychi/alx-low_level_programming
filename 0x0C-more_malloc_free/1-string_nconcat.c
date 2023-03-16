#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: destination for concatenation
 * @s2: source of string
 * @n: int type size of byte
 * Return: pointer to new memory allocated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int c, c1;
int sign = n;
char *ptr;
int len, len1;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

for (len = 0; s1[len] != '\0'; len++)
	;
for (len1 = 0; s2[len1] != '\0'; len1++)
	;
if (sign >= len1)
{
	sign = len1;
	ptr = malloc(sizeof(char) * (len + len1 + 1));
}
else
{
	ptr = malloc(sizeof(char) * (len + n + 1));
}
if (ptr == NULL)
	return (NULL);
for (c = 0; c < len; c++)
{
	ptr[c] = s1[c];
}
for (c1 = 0; c1 < sign; c1++)
{
	ptr[c++] = s2[c1];
}
ptr = '\0';
return (ptr);
}
