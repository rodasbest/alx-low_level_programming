#include <stdio.h>

/**
 * main - start of the program
 *
 * @argc: argument count
 * @argv: array of argument vector
 *
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
