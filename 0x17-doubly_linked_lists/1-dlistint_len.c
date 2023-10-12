#include "lists.h"

/**
 * dlistint_len - function that return the nb of
 *       elements in a d linked list
 * @h: point to head
 * Return: nb of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nb_elements = 0;

	while (h)
	{
		nb_elements++;
		h = h->next;
	}

	return (nb_elements);
}
