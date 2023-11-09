#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes the node at given index.
 *@head: a pointer to head of DLL
 *@index: index of node to be deleted
 *Return: returns 1 if it succeeded or -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *temp;
	unsigned int position;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	current = *head;
	position = 0;
	if (index == 0)
	{
		*head = (*head)->next;
	}
	else
	{
		while (position < (index - 1))
		{
			if (current == NULL)
				return (-1);
			current = current->next;
			position++;
		}
		temp = current;
		current = current->next;
		temp->next = current == NULL ? NULL : current->next;
	}
	free(current);
	return (1);
}
