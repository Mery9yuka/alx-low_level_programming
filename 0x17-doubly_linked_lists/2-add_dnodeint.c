#include "lists.h"
/**
 * add_dnodeint - function that add a new node at the beginning
 *        of a D linked list
 * @head: point to the head
 * @n: new node to be added
 * Return: address of new node, or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (*head);
}