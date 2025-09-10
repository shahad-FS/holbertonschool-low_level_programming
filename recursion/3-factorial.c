#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: the numbre
 *
 * Return: factorial of n, -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return(-1);
	if (n == 0)
		return(1);
	return(n * factorial(n - 1));
}
