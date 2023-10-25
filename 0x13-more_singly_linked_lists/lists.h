#ifndef LIST_H
#define LIST_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct list - singly linked list
 * define name for struct
 *
 * @n: is int
 * @next: is struct list
 * name for struct is listint_t
 *
 * Description: singly linked list
 */


typedef struct list

{ int n;
struct list *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
int delete_nodeint_at_index(listint_t **head, unsigned int index);


#endif
