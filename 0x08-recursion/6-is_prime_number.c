#include "main.h"
#include <stdio.h>

int prime_checker(int n, int i);
/**
 * is_prime_number - checking for prime number
 *@n: input
 * Return: Always 0.
 */
int is_prime_number(int n)
{
return (prime_checker(n, 1));
}
/**
 * prime_checker - checks for prime
 * @n: input to check
 * @i: n / 2, then passes to i - 1, checks if greater than 0
 * Return: prime check
 */
int prime_checker(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
return (1);
return (prime_checker(n, i + 1));
}
