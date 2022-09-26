#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: the string to be searched.
 * @c: the character to look for.
 *
 * Return: On success pointer to the first occurence
 * On not found, NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}

	return ('\0');
}
