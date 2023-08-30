#include "lists.h"


/**
 * insert_nodeint_at_index - function insert new node at a given position
 * @head: pointer to pointer of first node of the list
 * @idx: index of the list where the new node must be added.
 * @n: int data for a new node.
 * Return: address of  new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *nnods;
	listint_t *y;

	y = *head;

	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && y != NULL; x++)
		{
			y = y->next;
		}
	}

	if (y == NULL && idx != 0)
		return (NULL);

	nnods = malloc(sizeof(listint_t));
	if (nnods == NULL)
		return (NULL);

	nnods->n = n;

	if (idx == 0)
	{
		nnods->next = *head;
		*head = nnods;
	}
	else
	{
		nnods->next = y->next;
		y->next = nnods;
	}
	return (nnods);
}
