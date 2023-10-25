#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - function place a node at beginning
 *
 * @head: pointer to head
 * @n: data of node
 *
 * Return: the new node
 *
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new1;


	if (head == NULL)

		return (NULL);

	new1 = malloc(sizeof(listint_t));

	if (new1 == NULL)

		return (NULL);


	new1->n = n;
	new1->next = *head;
	*head = new1;

		return (new1);


}

