#include "lists.h"
/**
 *add_dnodeint-inserts node at the begining of dll
 *@head: a pointer to head of the dll
 *@n: value variable
 *Return: return a new node to dll
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
