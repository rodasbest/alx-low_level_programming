#include "main.h"

/**
 *_calloc - allocates memory for an array.
 *
 * @nmemb: elements of an array.
 * @size: size bytes of each element.
 *
 * Return: pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *fill;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	fill = ptr;

	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = '\0';

	return (ptr);
}
