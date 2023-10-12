#include "lists.h"
/**
 * free_dlistint - function that frees a Dlinked list
 * @head: Point to the head
 * Return: Null if the node does not exit
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
