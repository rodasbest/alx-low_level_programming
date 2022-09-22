#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to string to be appended to
 * @src: pointer to string to append
 *
 * Return: pointer to the resulting dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	if (*(dest + i) == '\0')
	{
		int j = 0;

		while (*(src + j) != '\0')
		{
			*(dest + i) = *(src + j);
			i++;
			j++;
		}
	}

	return (dest);
}
