#include "lists.h"
/**
 *get_dnodeint_at_index- finds the nth node of DLL
 *@head: a ptr the doubly linked list
 *@index: index of the node to be found
 *Return: returns the nth node of a DLL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;


	while (counter < index)
	{
		if (head == NULL)
			return (NULL);
		counter++;
		head  = head->next;
	}
	return (head);
}
