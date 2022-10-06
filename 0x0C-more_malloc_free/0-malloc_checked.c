#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory to be allocated
 *
 * Return: pointer to the allcated memory
 * On error, exit(98)
 */

void *malloc_checked(unsigned int b)
{
	void *mem_ptr;

	mem_ptr = malloc(b);
	if (mem_ptr == NULL)
		exit(98);

	return (mem_ptr);
}
