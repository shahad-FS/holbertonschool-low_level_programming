#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array integers ordered
 * from min to max, inclusive
 * @min: The first value of the array
 * @max: The last value of the array
 *
 * Return: If min > max or function fails - NULL
 * otherwies - a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
	{
		return (NULL);
	}
	size = min - max + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = min + index;
	}
	return (array);
}
