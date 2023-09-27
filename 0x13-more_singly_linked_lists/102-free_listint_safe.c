#include "lists.h"
/**
 * free_listint_safe - free list and set the head to null
 * @h: pointer to pointer of head
 *
 * Return: size of the list that was emptied
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t counter;

	counter = 0;
	current = *h;
	while (current != NULL)
	{
		counter++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp < current)
			break;
	}
	*h = NULL;

	return (counter);
}
