#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - calculate the sum of the two diagonals of a square matrix
 *
 * @a: the square matrix
 * @size: size of matrix
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		y = y + a[(size + 1) * i];
	}
	for (i = 1; i <= size; i++)
	{
		x = x + a[(size - 1) * i];
	}
	printf("%d, %d\n", y, x);
}
