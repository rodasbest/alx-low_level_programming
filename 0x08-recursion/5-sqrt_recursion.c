#include "main.h"

/**
 * sqrt_helper - helper function to allow use of another variable
 * @n: number to be evaluated
 * @m: potential square root of m.
 *
 * Return: natural square root of n, or -1 if no square root exists
 */
int sqrt_helper(int n, int m)
{
	if (n < 0)
		return (-1);

	if (m * m == n)
	{
		return (m);
	}
	else if (m != n)
	{
		return (sqrt_helper(n, m + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 *
 * @n: the number to calculate
 *
 * Return: square root, or
 * -1 if it does not have natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 0));
}
