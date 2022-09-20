#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: pointer
 *
 *Return: Nothing
 */

void puts_half(char *str)
{
	int n = 0;
	int i, j;

	while (*(str + n) != '\0')
	{
		n++;
	}
	j = n;

	if (n % 2 == 0)
	{
		n = n / 2;
		for (i = n; i < j; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		n = (n - 1) / 2;
		for (i = n; i < j; i++)
		{
			_putchar(*(str + i));
		}
	}

	_putchar('\n');
}
