#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: array of argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
