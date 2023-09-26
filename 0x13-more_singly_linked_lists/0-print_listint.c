#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
