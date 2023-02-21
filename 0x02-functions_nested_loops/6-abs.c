#include "main.h"
#include <stdio.h>

/**
 * _abs - a function that computes the absolute value of an integer
 *@x: single letter input
 * Return: Always 0.
 */
int _abs(int x)
{
return (x * ((x > 0) - (x < 0)));
}
