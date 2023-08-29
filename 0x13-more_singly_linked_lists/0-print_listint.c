#include "lists.h"


/**
 * print_listint - a function that  prints all the elements of a list
 * @h: pointer to head of a list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nods = 0

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nods++;
	}
	return (nods);
}
