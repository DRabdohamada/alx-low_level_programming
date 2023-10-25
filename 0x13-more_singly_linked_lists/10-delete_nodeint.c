#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at specific index
 * @head: pointer to start point
 * @index: index of node
 *
 * Return: status of the operation
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *post;

	if (head == NULL || *head == NULL)

		return (-1);

	if (index == 0)
	{
		next = (*head)->next;

		free(*head);

		*head = post;

		return (1);
	}

	temp = *head;

	for (i = 0; i < index - 1; i++)
	{

		temp = temp->next;
	}

	if (temp->next == NULL)

		return (-1);

	post = temp->next;
	temp->next = post->next;
	free(post);
	return (1);

}

