#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t.
 * @h: pointer to the header of a list.
 *
 *
 * Return: the number of nodes in a linked list.
 * @return size_t
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	char *nill = "(nill)";

	/* while we have a pointer to list */
	while (h != NULL)
	{
		if (h->str == NULL)
		{

			printf("[%d] %s\n", 0, nill);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		counter++;
	}
	return (counter);
}
