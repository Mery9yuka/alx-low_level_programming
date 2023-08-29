#include "lists.h"


/**
 * sum_listint - function that returns the sum of all the data (n) of a linked list
 * @head: pointer to head of the list.
 * Return: sum of all the data (n) in list, or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int s;

	s = 0;
	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
