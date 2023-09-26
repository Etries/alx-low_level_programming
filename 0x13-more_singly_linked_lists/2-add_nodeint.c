#include "lists.h"
/**
  * add_nodeint - adds a new node at the beginning the list.
  * @head: pointer to pointer of head of list
  * @n: element to be added.
  *
  * Return: addres of new element or NULL if no new element.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = *head;
	temp->n = n;
	*head = temp;

	return (*head);
}
