#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int row, col, space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
			_putchar(' ');
		for (col = 0; col < row; col++)
			_putchar('#');
		_putchar('\n');
	}
}
