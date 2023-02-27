#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 *@s: input
 * Return: Always 0.
 */
void rev_string(char *s)
{
char string = s[0];
int count = 0;
int i;
while (s[count] != '\0')
count++;
for (i = 0; i < count; i++)
{
count--;
string = s[i];
s[i] = s[count];
s[count] = string;
}
}
