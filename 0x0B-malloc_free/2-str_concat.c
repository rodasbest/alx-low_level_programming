#include "main.h"

/**
 * str_concat - on a newly allocated space in memory concatenates two strings
 *
 * @s1: the first string to be copied
 * @s2: the second string to be concatenated on s1
 *
 * Return: pointer to newly allocated space,
 * On error, NULL
 */

char *str_concat(char *s1, char *s2)
{
	int index, concat_index, len;
	char *ptr;

	concat_index = 0;
	len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		ptr[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		ptr[concat_index++] = s2[index];

	return (ptr);
}
