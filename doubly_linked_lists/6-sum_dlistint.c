#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a list
 * @head: the head of the list
 *
 * Return: the sum of all the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}