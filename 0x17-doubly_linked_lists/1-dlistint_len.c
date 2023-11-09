#include "lists.h"
/**
 *dlistint_len-prints the number of elements in dll
 *@h: pointer to head of dll
 *Return: returns number of element in the dll
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
		h = h->next;

	return (counter);
}
