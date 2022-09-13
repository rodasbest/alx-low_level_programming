#include "main.h"

/**
 * _isalpha - checks if alphabet
 *
 * @c: integer value
 *
 *Return: 1 aplhabet 0 Not
 */

int _isalpha(int c)
{
	if (c > 64 && c < 91 && c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
