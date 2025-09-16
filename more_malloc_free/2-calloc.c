#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array of a certain number
 * of element each of an inputted byte size
 * @nmemb: The number of elements
 * @size: The byte size of each array element
 *
 * Return: If nmemb = 0, size = 0, of the function fials - NULL
 * otherwise - a pointer ti the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}
	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
	{
		filler[index] = '\0';
	}
	return (mem);
}
