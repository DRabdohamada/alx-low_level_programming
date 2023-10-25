#include <stdio.h>
#include "lists.h"

/**
 * print_listint - is a function to print the counter
 *
 * @h: is the node to print
 *
 * Return: the count
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;

		counter++;

	}

	return (counter);




}

