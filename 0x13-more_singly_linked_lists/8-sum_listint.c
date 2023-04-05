#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of listint_t
 * @head: head of node
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
