#include "main.h"

/*
 * _is upper - Check if a character is uppercase.
 * Return: 1 if is uppercase, 0 otherwies.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
