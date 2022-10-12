#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to be searched
 * @size: size of array
 * @cmp: function used to compare values
 *
 * Return: index of first element for which cmp does not return 0
 * On error, -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 && array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			break;
	}
	if (i < size)
		return (i);
	else
		return (-1);
}
