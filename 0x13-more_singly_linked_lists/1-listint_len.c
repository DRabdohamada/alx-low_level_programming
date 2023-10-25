#include <stdio.h>
#include "lists.h"

/**
 * listint_len - is a function to print the counter
 *
 * @h: is the node to print
 *
 * Return: the count
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{

		h = h->next;

		counter++;

	}

	return (counter);




}

