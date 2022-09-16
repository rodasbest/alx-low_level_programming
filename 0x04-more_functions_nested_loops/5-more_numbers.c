#include "main.h"

/**
 * more_numbers - 10 times numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int i, j;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			int q;
			
			if (j > 9)
			{
				q = j / 10;
			}
			else
			{
				q = j;
			}
			_putchar(q + '0');
			
			if (k > 9)
				_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
