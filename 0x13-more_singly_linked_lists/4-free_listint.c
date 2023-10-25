#include "lists.h"
#include <stdio.h>

/**
 * free_listint - delete a list
 *
 * @head: the start
 *
 * Return: if error or not
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{

		temp = head->next;

		free(head);

		head = temp;
	}




}
