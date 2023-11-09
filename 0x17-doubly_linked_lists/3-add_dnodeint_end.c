#include "lists.h"

/**
 *add_dnodeint_end-inserts node at the end of dll
 *@head: a pointer ti the head of DLL
 *@n: value variable
 *Return: returns address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *traverse;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{

		newnode->next = *head;
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;
		newnode->next = NULL;
		newnode->prev = traverse;
		traverse->next = newnode;
	}
	return (newnode);
}

