#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to the head node
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
