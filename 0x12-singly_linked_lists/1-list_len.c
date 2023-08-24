#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: A pointer to the head node.
 *
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t e;

	e = 0;
	for (e = 0; h != NULL; e++)
	{
		h = h->next;
	}
	return (e);
}
