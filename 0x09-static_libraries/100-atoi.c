#include "main.h"
/**
*_atoi - function to convert string to an integer
*@s: string
*Return: Always 0 (Success)
*/
int _atoi(char *s)
{
int res = 0;
int i = 0;
int sign = 1;
if (s[0] == ('-'))
{
sign = -1;
i++;
}
for (; s[i] != '\0'; i++)
res = res * 10 + s[i] - '0';
return (res *sign);
}
