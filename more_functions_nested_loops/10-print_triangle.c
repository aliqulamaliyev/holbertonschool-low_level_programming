#include "main.h"
/**
 * print_triangle - prints a right-aligned triangle using '#'
 * @size: the height and base width of the triangle
 */

void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
		{
			_putchar(' ');
		}

		for (hash = 0; hash < row; hash++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}

