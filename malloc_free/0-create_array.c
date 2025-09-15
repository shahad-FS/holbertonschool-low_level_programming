#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of chars and
 * initializes it with a specific char
 * @size: The size of the arry to be initialized
 * @c: The specific char to initizlie the arry with
 *
 * Return: if size == 0 or the function fails - NULL
 * otherwise - a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		arr[index] = c;
	}
	return (arr);
}
