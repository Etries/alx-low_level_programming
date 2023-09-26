#include "lists.h"
/**
  * listint_len - prints number of elements in the list.
  * @h: pointer to head of the list.
  *
  * Return: number of elements in list.
  */
size_t listint_len(const listint_t *h)
{
	int counter;

	counter = 0;
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
