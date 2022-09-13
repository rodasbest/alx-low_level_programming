#include "main.h"

/**
 * times_table - prints 9 times table
 *
 */

void times_table(void)
{
	int x, y, z, i, j;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z > 9)
			{
				i = z % 10;
				j = (z - i) / 10;

				_putchar(',');
				_putchar(' ');
				_putchar(j + '0');
				_putchar(i + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
