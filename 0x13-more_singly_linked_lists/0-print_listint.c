#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t p;

	for (p = 0; h; p++)
	{
	printf("%d\n", h->n);
	h = h->next;
	}
	return (p);
}
