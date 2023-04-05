#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of listint_t
 * @head: head of the node list
 * @index: node to be delete
 * Return: pointer to the head of the list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
	listint_t *ptr, *del;

	if (!head || *head)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
		{
			return (-1);
		}
	}
	del = ptr->next;
	ptr->next = del->next;
	free(del);
	return (1);
}

