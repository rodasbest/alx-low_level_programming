#include<stdio.h>

/***
 * main - Entry point
 *
 * Description: writes the message to the standard error
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Some description about the function */
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			39, 1, stderr);
	return (1);
}
