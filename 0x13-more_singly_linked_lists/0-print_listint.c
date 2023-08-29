#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a linked list
 * @h: pointer to head of a list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nod = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nod++;
	}
	return (nod);
}
