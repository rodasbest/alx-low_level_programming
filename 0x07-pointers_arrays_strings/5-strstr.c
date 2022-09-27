#include "main.h"

/**
 * _strstr - finds the first occurence of substring
 *
 * @haystack: the string to be scanned
 * @needle: the string to be looked up
 *
 * Return: pointer to the beginning of located substring
 * On not found, NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;
			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
