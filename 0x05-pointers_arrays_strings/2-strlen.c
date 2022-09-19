#include "main.h"

/**
 * _strlen - calcuate length of a string.
 *
 *@s: character pointer
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int length, i;

	length = 0;
	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
		length++;
	}

	return (length);
}
