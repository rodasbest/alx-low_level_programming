#include <stdio.h>

/**
 * sum_of_multiples - calcutlate sum of multiples of 3 and 5
 *
 * @n: natural number range
 *
 * Return: nothing
 */

void sum_of_multiples(void)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);
}
