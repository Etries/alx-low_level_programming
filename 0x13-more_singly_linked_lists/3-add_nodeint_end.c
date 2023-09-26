#include "lists.h"
/**
  * add_nodeint_end - adds a new node at the tail of list.
  * @head: header of the list.
  * @n: element to be added in the list.
  *
  * Return: address of the new element or NULL if no element added.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodeint, *tail;

	new_nodeint = malloc(sizeof(listint_t));
	if (new_nodeint == NULL)
		return (NULL);

	new_nodeint->n = n;
	new_nodeint->next = NULL;

	/* if head is a null pointer, assign new node to it*/
	if (*head == NULL)
		*head = new_nodeint;

	else
	{
		tail = *head;

		while (tail->next != NULL)
			tail = tail->next;

		tail->next = new_nodeint;
	}

	return (new_nodeint);
}
