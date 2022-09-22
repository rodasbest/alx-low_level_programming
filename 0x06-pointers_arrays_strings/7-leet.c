#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: string input
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;

	char input[] = "aAeEoOtTlL";
	char output[] = "4433007711";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (input[j] == *(str + i))
			{
				*(str + i) = output[j];
			}
		}
	}

	return (str);
}
