#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
long int n;
n = 612852475143;
long int d = 2, prime = 0, max;
while(n != 0)
{
if (n % d != 0)
d = d + 1;
else
{
max = n;
n = n / d;
if (n == 1)
{
printf("%d\n", max);
prime = 1;
break;
}
}
}
return (0);
}
