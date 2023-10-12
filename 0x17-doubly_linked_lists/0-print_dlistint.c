#include "lists.h"

/**
 * print_dlistint - function that prints all the elements
 *               of a doubly linked list
 * @h: Pointer to the head
 * Return: nb of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nb_node = 0;

	while (h)
	{
		nb_node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nb_node);
}
