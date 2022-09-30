#include <stdio.h>
#include <stdlib.h>

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
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);

		printf("%d\n", x * y);
	}

	return (0);
}
