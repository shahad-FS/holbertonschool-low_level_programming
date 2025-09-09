#include "main.h"

/**
 * _memset - fills the first n bytes of the  memory area
 * pointed to by @s with constant byte @c
 * @s: A pointer to the memory area to be filled
 * @b: constant byte
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
