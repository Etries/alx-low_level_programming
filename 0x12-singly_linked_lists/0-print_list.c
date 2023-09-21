#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @header: points to the first node of list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *header)
{
	size_t size = 0;

	while (header)
	{
		if (!header->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", header->len, header->str);
		header = header->next;
		size++;
	}

	return (size);
}
