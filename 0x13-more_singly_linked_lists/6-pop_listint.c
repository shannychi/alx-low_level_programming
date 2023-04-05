#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint -a function that deletes the head node of a listint_t
 * @head: pointer
 * Return: head node date
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr, *new;
	int i;

	if (*head == NULL)
		return (0);
	new = ptr = *head;
	if (*head)
	{
		i = ptr->n;
		*head = ptr->next;
		free(new);
	}
	else
		i = 0;
	return (i);
}
