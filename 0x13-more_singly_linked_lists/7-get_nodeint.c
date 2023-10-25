#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - the index number node's of linked list.
 * @head: pointer of the start node
 * @index: index of the node
 *
 * Return: pointer of data of the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)

		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;

		if (head == NULL)

			return (NULL);
	}

	return (head);
}

