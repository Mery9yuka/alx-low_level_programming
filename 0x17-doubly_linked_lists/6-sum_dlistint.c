#include "lists.h"

/**
 * sum_dlistint - function that returns the sum
 *    of all the data n in a  Dlinked list
 * @head: Point to the head
 * Return: 0 if list is empty, or sum of all data n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);
}