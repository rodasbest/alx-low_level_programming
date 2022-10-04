#include "main.h"

/**
 * argstostr - concatenate all the argument of your program
 *
 * @ac: argument count
 * @av: array of strings
 *
 * Return: pointer to a new string
 * On error, NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, total_len;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;

	ptr = (char *)malloc(sizeof(char) * (total_len + ac + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0, k = 0; k < total_len + ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			ptr[k] = av[i][j];
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';

	return (ptr);
}
