#include "main.h"
/**
 *char *leet - a function that encodes a string into 1337
 *@n: input
 * Return: Always 0.
 */
char *leet(char *n)
{
int i, j;
int arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int replace[] = {'4', '3', '0', '7', '1'};
for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j <= 9; j++)
{
if (n[i] == arr[j])
{
n[i] = replace[j / 2];
}
}
}
return (n);
}
