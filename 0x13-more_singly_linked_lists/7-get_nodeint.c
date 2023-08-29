#include "lists.h"


/**
 * get_nodeint_at_index - function that returns the nth node of alinked list
 * @head: pointer to thehead of a list
 * @index: index of a node, starting from  0
 * Return: pointer to  indexed node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index && head != NULL; x++)
		head = head->next;

	return (head);
}
