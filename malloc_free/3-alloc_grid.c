#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-D array of
 * integers with each element initalize to 0
 * @width: the width of the 2-D array
 * @height: The height of the 2-D array
 *
 * Return: if width <= 0 , heigh <= 0, or function fails - NULL
 * otherwise - a pointer to the 2-D array of integers
 */
int **alloc_grid(int width, int height)
{
	int **twod;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	twod = malloc(sizeof(int *) * height);

	if (twod == NULL)
	{
		return (NULL);
	}
	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twod[hgt_index] = malloc(sizeof(int) * width);

		if (twod[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(twod[hgt_index]);
			free(twod);
			return (NULL);
		}
	}
	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			twod[hgt_index][wid_index] = 0;
	}
	return (twod);
}
