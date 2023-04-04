#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that free listint list
 * @head: pointer
 * Return void
 */

void free_listint2(listint_t **head)
{
	listint_t *new, *p;

	if (head == NULL)
	{
		return;
	}

	p = *head;
	while (p != NULL)
	{
		new = p;
		p = p->next;
		free(new);
	}
	*head = NULL;
}
