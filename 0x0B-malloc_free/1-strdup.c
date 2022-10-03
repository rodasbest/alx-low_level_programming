#include "main.h"

/**
 * str_len - counts the string length
 *
 * @str: the string to be measured
 *
 * Return: length of string
 */

int str_len(char *str)
{
	int count, i;

	count = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * _strdup - copy a string in a newly allocated space in memory
 *
 * @str: string to be copied
 *
 * Return: pointer to the duplicate string,
 * On error, NULL
 */

char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	if (str == NULL)
		return ('\0');

	size = str_len(str);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	return (ptr);
	free(ptr);

}
