#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - make new node at specific postion
 * @head: pointer to head
 * @idx: index of the node
 * @n: new node data
 *
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i;
	listint_t *temp, *new4;

	if (head == NULL)

		return (NULL);

	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}

	new4 = malloc(sizeof(listint_t));

	if (new4 == NULL)

		return (NULL);

	new4->n = n;

	if (idx == 0)
	{
		new4->next = *head;
		*head = new4;

		return (new4);
	}

	new4->next = temp->next;
	temp->next = new4;

	return (new4);
}

