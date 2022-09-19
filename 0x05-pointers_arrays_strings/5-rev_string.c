#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: character pointer
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int f = 0;
	int r = 0;
	int c;

	while (*(s + f) != 0)
	{
		f++;
	}
	if ((f % 2) == 0)
	{
		c = (f / 2);
	}
	else
	{
		c = (f / 2) + 1;
	}

	f--;

	while (f >= c)
	{
		char b = *(s + r);

		*(s + r) = *(s + f);
		*(s + f) = b;
		r++;
		f--;
	}
}
