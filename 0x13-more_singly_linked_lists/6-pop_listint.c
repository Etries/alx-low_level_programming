#include "lists.h"
/**
  * pop_listint - delets the head node.
  * @head: head node.
  *
  * Return: 0 if list is empty.
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int counter = 0;

	if (*head == NULL)
		return (counter);

	if (*head == NULL)
		return (counter);

	temp = *head;
	counter = temp->n;
	/*make head point to the next element*/
	*head = (*head)->next;
	free(temp);

	return (counter);
}
