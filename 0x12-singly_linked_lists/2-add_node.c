#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning
 * @head: pointer to pointer to the head node
 * @str: string to be stored
 *
 * Return: pointer to new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	if (str == NULL)
		return (NULL);
	
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}

	n->len = strlen(str);
	n->next = *head;
	*head = n;

	return (*head);
}
