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
	int i, j, k = 0, size = ac;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			size++;

	ptr = malloc(sizeof(char) * (size + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k++] = av[i][j];
		}
		ptr[k++] = '\n';
	}
	ptr[k] = '\0';
	return (ptr);
}
