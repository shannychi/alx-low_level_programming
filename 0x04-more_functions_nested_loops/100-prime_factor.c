#include <stdio.h>
#include <math.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
long n = 612852475143;
for (i = (int) sqrt(n); i > 2; i++)
{
if (n % i == 0)
{
printf("%d\n", i);
break;
}
}
return (0);
}
