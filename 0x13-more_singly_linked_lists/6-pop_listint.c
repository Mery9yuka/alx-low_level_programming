#include "lists.h"


/**
 * pop_listint - Deletes the head node of a  linked list
 * @head: A pointer to pointer of the first node
 * Return: int of deleted head node
 */
int pop_listint(listint_t **head)
{
	listint_t *i, *j;
	int val;

	if (*head == NULL)
		return (0);

	j = *head;

	val = j->n;

	i = j->next;

	free(j);

	*head = i;

	return (val);
}
