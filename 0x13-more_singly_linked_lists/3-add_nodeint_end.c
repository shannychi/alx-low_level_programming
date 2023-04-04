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

	p = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new;
	return (*head);
}
	
