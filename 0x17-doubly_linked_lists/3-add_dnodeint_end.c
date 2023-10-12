#include "lists.h"
/**
 * add_dnodeint_end - function that add a new node in the end
 *        of a Dlinked list
 * @head:  point to the head
 * @n:  new node to be added
 * Return: address of new node, or NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *head_n = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (head_n->next != NULL)
		head_n = head_n->next;

	head_n->next = new_node;
	new_node->prev = head_n;
	return (*head);
}
