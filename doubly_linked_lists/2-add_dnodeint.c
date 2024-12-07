#include "lists.h"

/**
	* add_dnodeint - add a node at the beginning of the list
	* @head: double pointer to the adress of the beginning of the list
	* @n: pointer to the things we want to add
	* Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NewNode;

	NewNode = malloc(sizeof(dlistint_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;
	NewNode->next = *head;
	NewNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = NewNode;

	*head = NewNode;

	return (NewNode);
}
