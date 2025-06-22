#include "main.h"
/**
 * print_square - print a square in the terminal
 *
 * @n: number of times to print '#'
 *
 * Return: void
 */
void  print_square(int n)
{
	int r, c;

	if (n <= 0)
	{
		_putchar('\n');
		return;

	}
	for (r = 0; r < n; r++)
	{
		for (c = 0; c < n; c++)
		{
			_putchar('#');

		}
		_putchar('\n');
	}
}
