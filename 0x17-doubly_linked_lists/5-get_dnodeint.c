#include "lists.h"
/**
 * get_dnodeint_at_index -> Returns the nth node of a dlinked list
 * @head: Head List
 * @index: Index Node
 * Return: Node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int y;
	dlistint_t *u;

	if (head == NULL)
		return (NULL);

	u = head;
	for (y = 0; y < index; y++)
	{
		if (u == NULL)
			return (NULL);
		u = u->next;
	}

	return (u);
}
