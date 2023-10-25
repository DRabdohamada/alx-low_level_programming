#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - sum of all the data n of a linked list.
 * @head: pointer to the start node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

