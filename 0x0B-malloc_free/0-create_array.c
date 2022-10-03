#include "main.h"

/**
 * create_array - create an array of chars and initalizes it with specifc char
 *
 * @size: the size of an array to be created
 * @c: the specific character used to initalize the array
 *
 * Return: a pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	if (size <= 0)
	{
		return ('\0');
	}
	else
	{
		char *ptr;
		unsigned int i;

		ptr = malloc(size * sizeof(char));
		if (ptr == NULL)
		{
			return ('\0');
		}
		i = 0;
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
		return (ptr);
	}
}
