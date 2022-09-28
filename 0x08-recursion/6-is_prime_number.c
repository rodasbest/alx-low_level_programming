#include "main.h"
/**
 * is_prime_helper - helper function to determine if number is prime
 * @n: number to be determined if prime
 * @m: number to check if it is a factor of n
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_helper(int n, int m)
{
	if (n == m)
		return (1);
	else if (!(n % m))
		return (0);
	else
		return (is_prime_helper(n, m + 1));
}

/**
 * is_prime_number - check if the number is prime or not
 *
 * @n: the number to be checked
 *
 * Return: 1 if the number is prime, or otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_helper(n, 2));
}
