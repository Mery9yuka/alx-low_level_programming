#include "lists.h"


/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to head of a list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nods = 0;

	while (h)
	{
		h = h->next;
		nods++;
	}
	return (nods);
}
