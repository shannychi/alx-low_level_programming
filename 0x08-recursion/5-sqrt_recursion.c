#include "main.h"
int squareroot(int n, int i);
/**
 * _sqrt_recursion -  a function that returns the natural squareroot.
 *@n: input
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
return (squareroot(n, 1));
}
/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
int squareroot(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);
return (squareroot(n, i + 1));
}
