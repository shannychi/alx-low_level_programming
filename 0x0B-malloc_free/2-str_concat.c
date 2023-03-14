#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that check length of a string
 * @s: string to be checked
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return (i);
}

/**
 * _strcat - function to concate a string
 * @dest: destination concation
 *@src: source of the string
 *@n: int size type
*Return: Always 0 (success)
*/
char *_strcat(char *dest, char *src, int n)
{
	int len, i;

	len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[len + i] = src[i];
	return (dest);
}

/**
 * str_concat - fuction to allocate space for a new string concation
 * @s1: array pointer to the destination of the string
 * @s2: array pointer to the source of the string
 * Return: Always 0 (success)
 */
char *str_concat(char *s1, char *s2)
{
char *pt;
int size1, size2;

if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
size1 = _strlen(s1);
size2 = _strlen(s2);
pt = malloc(((size1 + size2) +1) * sizeof(char));
if (pt == NULL)
{
	return (NULL);
}
_strcat(pt, s1, size1);
_strcat(pt, s2, size2);
pt += '\0';
return (pt);
}
