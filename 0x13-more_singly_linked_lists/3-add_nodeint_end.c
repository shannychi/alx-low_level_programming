#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint_end - a function that adds a new node at the end of a list
 *@head: pointer
 *@n: integer
 *Return: Always 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *new;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
		return (*head);
	}
	new = *head;
	while (new->next != NULL)
	{
		new = p->next;
	}
	new->next = p;
	return (*head);
}
