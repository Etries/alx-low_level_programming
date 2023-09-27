#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - find the loop in a linked list
 * @head: pointer to head of linked list
 *
 * Return: index of node where loop starts, or NULL if no loop is found.
 */
listint_t *find_listint_loop(listint_t *head)
{

	listint_t *start, *currentf;

	if (head == NULL)
		return (NULL);

	start = currentf = head;
	do {
		if (start->next)
			start = start->next;
		else
			return (NULL);

		if (currentf->next->next)
			currentf = currentf->next->next;
		else
			return (NULL);
	} while (currentf != start);

	start = head;
	while (currentf != start)
	{
		currentf = currentf->next;
		start = start->next;
	}

	return (start);
}
