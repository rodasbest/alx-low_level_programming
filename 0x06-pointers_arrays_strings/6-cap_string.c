#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i, j;

	char separators[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
			{
				*(str + i) -= 'a' - 'A';
			}
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (separators[j] == *(str + i - 1))
						*(str + i) -= 'a' - 'A';
				}
			}
		}

		i++;
	}
	return (str);
}
