#include "lists.h"
/**
	* add_node - add a node in a list
	* @head: number of character in a string
	* @str: the given string
	* Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *NewNode;
	unsigned int counter;
	char *copy;

	NewNode = malloc(sizeof(list_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}
	copy = strdup(str);
	if (copy == NULL)
	return (NULL);

	while (str[counter] != '\0')
	{
	counter++;
	}

	NewNode->str = copy;
	NewNode->len = counter;
	NewNode->next = *head;

	*head = NewNode;
	return (NewNode);
}
