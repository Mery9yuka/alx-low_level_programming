#include "lists.h"
/**
 * delete_dnodeint_at_index - function that delete a node
 *         at an index in a Dlinked list
 * @head: Point to the head
 * @index: Index of the node that shoul be deleted
 * Return: 1 if succeded, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *n = *head;

	if (*head == NULL)
		return (-1);
	while (index != 0)
	{
		if (n == NULL)
			return (-1);
		n = n->next;
		index--;
	}
	if (n == *head)
	{
		*head = n->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		n->prev->next = n->next;
		if (n->next != NULL)
			n->next->prev = n->prev;
	}
	free(n);
	return (1);
}
