#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes and replace the node with the next node
 * @head: double pointer to first node
 *
 *Return: the content of the first node
 */

int pop_listint(listint_t **head)
{

	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)

		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;

	free(temp);

	return (n);
}
