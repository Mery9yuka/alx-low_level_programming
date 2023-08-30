#include "lists.h"


/**
 * delete_nodeint_at_index - function deleting the node at index of linked list
 * @head: pointer to  head of a list
 * @index: index of the node that must be deleted. Index starting from 0
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *p_node;
	listint_t *n_node;

	p_node = *head;

	if (index != 0)
	{
		for (x = 0; x < index - 1 && p_node != NULL; x++)
		{
			p_node = p_node->next;
		}
	}

	if (p_node == NULL || (p_node->next == NULL && index != 0))
	{
		return (-1);
	}

	n_node = p_node->next;

	if (index != 0)
	{
		p_node->next = n_node->next;
		free(n_node);
	}
	else
	{
		free(p_node);
		*head = n_node;
	}

	return (1);
}
