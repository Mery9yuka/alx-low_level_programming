#include "lists.h"
/**
 * add_nodeint_end - function tha adds a new node at the end of alist
 * @head: double.pointer to the head
 * @n: integer value  for the new node
 * Return: address of new element, or NULL if it fail.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnods;
	listint_t *last = *head;

	nnods = malloc(sizeof(listint_t));
	if (!nnods)
		return (NULL);

	nnods->n = n;
	nnods->next = NULL;

	if (*head == NULL)
	{
		*head = nnods;
		return (nnods);
	}

	while (last->next)
		last = last->next;

	last->next = nnods;

	return (nnods);
}
