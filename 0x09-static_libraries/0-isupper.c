#include "main.h"
/**
*_isupper - function that checks for uppercase
*@c: input
*Return: Always 0 (Success)
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
