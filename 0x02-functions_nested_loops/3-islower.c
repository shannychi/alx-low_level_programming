#include "main.h"

/**
 * _islower - a function to check for lowercase
 *@c:single letter input 
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
