#include "lists.h"
/**
 *print_dlistint-displays all elements in doubly linked list
 *@h: pointer to head of doubly linked list
 *Return: number of element in the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
