#include "lists.h"
/**
 *free_dlistint- frees the memory held by pointer
 *@head: pointer to head of DLL
 *
 * Returns: returns nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	head = NULL;

}
