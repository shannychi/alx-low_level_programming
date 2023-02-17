#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char lowercase, e, q;
e = 'e';
q = 'q';
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
if (lowercase != e && lowercase != q)
putchar(lowercase);
}
putchar('\n');
return (0);
}
