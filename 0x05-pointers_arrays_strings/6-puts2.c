#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: character pointer
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i = 0;
	int b;

	while (*(str + i) != 0)
	{
		i++;
	}
	for (b = 0; b < i; b += 2)
	{
		_putchar(*(str + b));
	}
	_putchar('\n');
}
