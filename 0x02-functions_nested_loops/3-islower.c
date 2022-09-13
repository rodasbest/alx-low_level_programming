#include "main.h"

/**
 *_islower - checks character is lowercase
 *
 * @c: integer value
 *
 * Return: 1 lowercase 0 Not
 *
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
