#include "main.h"

/**
 *  _isalpha - a function that checks weather character is alphabet
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
