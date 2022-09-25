#include <stdio.h>

/**
 * main - check the code
 *
 *
 * Return: Always 0
 */

int main(void)
{
	sum_of_multiples(void);
	return (0);
}

/**
 * sum_of_multiples - calculate sum of multiples of 3 and 5
 *
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
