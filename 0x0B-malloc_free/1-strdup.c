#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - return length of a string
 *@s: string
 *Return: Always 0 (success)
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
 * _strdup - a function that returns a pointer string
 * @str: string
 * Return: Always 0 (success)
 */

char *_strdup(char *str)
{
char *pt;
int size;
int i;

if (str == NULL)
{
	return (NULL);
}
size = _strlen(str) + 1;
pt = malloc(size *sizeof(char));
i = 0;
while (i < size)
{
	if (pt == NULL)
{
	return (NULL);
}
pt[i] = str[i];
i++;
}
return (pt);
}
