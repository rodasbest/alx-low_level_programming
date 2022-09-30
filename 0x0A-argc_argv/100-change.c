#include <stdio.h>
#include <stdlib.h>

/**
 * changeCoin - calculate the number of coins to make change
 *
 * @money: the money to be changed
 *
 * Return: number of coins
 */

int changeCoin(int money)
{
	int count;

	count = 0;
	while (money != 0)
	{
		if (money >= 25)
		{
			money -= 25;
			count++;
		}
		else if (money >= 10 && money < 25)
		{
			money -= 10;
			count++;
		}
		else if (money >= 5 && money < 10)
		{
			money -= 5;
			count++;
		}
		else if (money >= 2 && money < 5)
		{
			money -= 2;
			count++;
		}
		else
		{
			money -= 1;
			count++;
		}
	}

	return (count);
}


/**
 * main - prints the mininmum number of coins to make change
 *
 * @argc: command line argument count
 * @argv: array of command line argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", changeCoin(amount));
	}

	return (0);
}
