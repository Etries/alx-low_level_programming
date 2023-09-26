#include "lists.h"
/**
  * free_listint2 - frees a list.
  * @head: head of th elist.
  *
  * Return: nothing.
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
