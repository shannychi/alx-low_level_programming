#include "main.h"
#include <stdio.h>

/**
 *set_string - a function that sets the value of a pointer to a char
 *@s: the pointer to change
*@to: the value to change to
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
*s = to;
}
