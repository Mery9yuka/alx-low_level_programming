#include "lists.h"


/**
 * free_listint2 - function that frees alist
 * @head: double pointer to first node
 */
void free_listint2(listint_t **head)
{
	listint_t *l;

	if (head == NULL)
		return;

	while (*head)
	{
		l = (*head)->next;
		free(*head);
		*head = l;
	}
	*head = NULL;
}
