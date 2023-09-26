#include "lists.h"
/**
  * sum_listint - prints the sum of all the numbers in the linked list.
  * @head: pointer to head.
  *
  * Return: sum of all nodes's values
  */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
