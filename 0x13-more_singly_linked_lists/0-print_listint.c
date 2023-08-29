#include "lists.h"
/**
 * print_listint - a function thatprints all the elements of a list
 * @h: pointer to head of list
 * Return: nb of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
