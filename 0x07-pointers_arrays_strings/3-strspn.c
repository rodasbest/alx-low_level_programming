#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: the string to be scanned.
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, match, accept_len;
	unsigned int count;

	count = 0;

	for (i = 0; accept[i] != '\0'; i++)
		;
	accept_len = i;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				match = 1;

			if (j == accept_len - 1 && match == 1)
				count++;
			else if (j == accept_len - 1 && match == 0)
				return (count);
		}
	}
	return (count);
}
