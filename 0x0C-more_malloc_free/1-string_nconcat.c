#include "main.h"
/**
 * strleng - measure string length
 *
 * @str: string to be measured
 *
 * Return: string length
 */

unsigned int strleng(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;

	return (count);
}

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
	unsigned int i, concat_index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	concat = malloc(sizeof(char) * (strleng(s1) + n + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < strleng(s1); i++)
		concat[concat_index++] = s1[i];

	for (i = 0; i <= n; i++)
		concat[concat_index++] = s2[i];

	return (concat);
}
