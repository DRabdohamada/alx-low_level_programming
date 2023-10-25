#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - free a node and begin drom the head
 *
 * @head: the begin
 *
 * Return: if error
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)

		return;

	while (*head != NULL)
	{
		temp = (*head)->next;

		free(*head);

		*head = temp;
	}
}
