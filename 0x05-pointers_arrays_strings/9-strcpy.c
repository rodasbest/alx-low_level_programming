#include "main.h"

/**
 * _strcpy - copies string pointed by src to dest
 *
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: the pointer at dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	if (*(src + i) == '\0')
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
