#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 *
 * @h: head of linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *temp;

	temp = h;

	while (temp)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);

		temp = temp->next;
		count++;
	}

	return (count);
}
