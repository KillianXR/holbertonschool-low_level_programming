#include "lists.h"
/**
	* add_node_end - add a node in the end of a list
	* @head: number of character in a string
	* @str: the given string
	* Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	unsigned int count = 0;
	char *copy;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	copy = strdup(str);
	if (copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len] != '\0')
	{
		count++;
	}

	new_node->str = copy;
	new_node->len = count;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (new_node);
}
