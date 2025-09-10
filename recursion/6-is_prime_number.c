#include "main.h"

/**
 * check_prime - helper function to check divisibility
 * @n: number to check
 * @i: current divisor
 *
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - return 1 if n is a prime number, otherwise 0
 * @n: the number
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
