#include "main.h"

/**
 *  int sqrt_helper - helps to find the natural square root recursively
 *  @n: the number to find the square root of
 *  @i: the current guess
 *
 *  Return: the natural square root, or -1 if none
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number
 *
 * Return: the square root, or -1 if not natural
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
