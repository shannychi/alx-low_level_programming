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
	listint_t *new = *head;

	if (*head == NULL)
	{
		return;
	}
	while (new != NULL)
	{
		new = new->next;
		free(*head);
		*head = new;
	}
	*head = NULL;
}
