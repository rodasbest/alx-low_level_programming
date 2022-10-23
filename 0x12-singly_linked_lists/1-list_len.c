#include "lists.h"

/**
 * list_len - count the number of elements
 *
 * @h: linked list to be checked
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
