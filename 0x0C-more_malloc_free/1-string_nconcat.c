#include "main.h"

/**
 * string_nconcat - concateenates two strings up to n-bytes
 *
 * @s1: first string to be used
 * @s2: second string n-bytes to be copied
 * @n: bytes of data to be copied from s2
 *
 * Return: pointer to new allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		concat[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[len++] = s2[i];

	concat[len] = '\0';

	return (concat);
}
