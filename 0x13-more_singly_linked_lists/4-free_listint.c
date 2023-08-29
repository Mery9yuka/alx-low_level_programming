#include "lists.h"
/**
 * free_listint - a function that frees a list
 * @head: pointer to the head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *l;

	while ((l = head) != NULL)
	{
		head = head->next;
		free(l);
	}
	return (0);
}
