#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 *
 * @dest: pointer containing the destination string
 * @src: pointer containing the source string
 * @n: integer showing the number of bytes
 *
 * Return: destination pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
