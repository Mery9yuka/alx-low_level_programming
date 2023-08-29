#include "lists.h"
/**
 * add_nodeint - function that adds a new node at beginning of a list
 * @head: double pointer to head of a list
 * @n: integer value for new node
 * Return: address of new element, or NULL if it fail.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnods;

	nnods = malloc(sizeof(listint_t));

	if (nnods == NULL)
		return (NULL);

	nnods->n = n;
	nnods->next = *head;
	*head = nnods;
}
