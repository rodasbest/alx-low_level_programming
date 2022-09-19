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

	while (*(str + n) != '\0')
	{
		n++;
	}

	n--;

	if (n % 2 == 0)
	{
		n = n / 2;
		while (*(str + n) != '\0')
		{
			_putchar(*(str + n));
			n++;
		}
	}
	else
	{
		n = (n - 1) / 2;
		while (*(str + n) != '\0')
		{
			_putchar(*(str + n));
			n++;
		}
	}

	_putchar('\n');
}
