#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: array of integers to be reversed
 * @n: number of elements to swap
 *
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	j = 0;
	k = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		j = a[k];
		a[k] = a[i];
		a[i] = j;
		k--;
	}
}
