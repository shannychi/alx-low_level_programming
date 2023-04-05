#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of list
 * @idx: index where new code should be added
 * @n: value of the inserted code
 * Return: pointer to the head list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;

	ptr = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = ptr;
		*head = new;
		return (*head);
	}

	while (idx > 1)
	{
		ptr = ptr->next;
		idx--;
		if (!ptr)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
