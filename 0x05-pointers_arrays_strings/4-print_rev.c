#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: character pointer
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s != 0)
	{
		s++;
		count++;
	}
	s--;
	count--;

	while (count >= 0)
	{
		_putchar(*s);
		s--;
		count--;
	}
	_putchar('\n');
}
