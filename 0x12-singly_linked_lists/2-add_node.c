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
	unsigned int len;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
