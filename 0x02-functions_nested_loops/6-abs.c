#include "main.h"

/**
 * _abs - absolute value of an integer
 *
 * @n:argumnet
 *
 * Return: positive integer value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
