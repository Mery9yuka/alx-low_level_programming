#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 *           at  given position
 * @h: poitnt to Head List
 * @idx: Index to be inserted
 * @n: number to be added
 * Return: New Node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *y, *u, *new_node;
	unsigned int a;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	y = *h;
	for (a = 0; a < idx - 1; a++)
	{
		if (y == NULL)
			return (NULL);
		y = y->next;
	}
	if (y == NULL)
		return (NULL);
	if (y->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	u = y->next;
	y->next = new_node;
	new_node->prev = y;
	new_node->next = u;
	u->prev = new_node;
	new_node->n = n;
	return (new_node);
}
