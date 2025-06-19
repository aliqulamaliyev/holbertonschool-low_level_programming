#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @c: the number to check
 *
 * Return: 1 if n>0, 0 if n== 0,otherwise -1
 *
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
