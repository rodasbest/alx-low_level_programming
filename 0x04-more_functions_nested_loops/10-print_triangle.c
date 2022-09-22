#include "main.h"

/**
 * print_triangle -  triangle with # and a new line.
 * @size:  size of the triangle
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 0, q, dif;

		for (; i < size; i++)
		{
			dif = size - i;
			for (q = 1; q <= size; q++)
			{
				if (q >= dif)
				{
					_putchar(35);
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
