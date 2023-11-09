#include "lists.h"
/**
 *sum_dlistint- finds the sum of all the values in DLL
 *@head: a pointer ti head of the DLL
 *Return: returns sum of the data or 0 if DLL is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
