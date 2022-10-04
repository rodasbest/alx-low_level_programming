#include "main.h"

/**
 * wordcount - counts the number of words in a string
 *
 * @s: string to count
 *
 * Return: int of number of words
 */

int wordcount(char *s)
{
	int i, count = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				count++;
		}
		else if (i == 0)
			count++;
	}
	count++;
	return (count);
}

/**
 * strtow - splits a string into words
 *
 * @str: string to be splited
 *
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wordcount(str);
	if (n == 1)
		return (NULL);
	words = (char **)malloc(n * sizeof(char *));
	if (words == NULL)
		return (NULL);
	words[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			words[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (words[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(words[k]);
				free(words[n - 1]);
				free(words);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				words[wc][l] = str[i + l];
			words[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (words);
}
