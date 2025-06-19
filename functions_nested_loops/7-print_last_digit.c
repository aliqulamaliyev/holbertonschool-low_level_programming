#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: number extract to the last digit form
 *
 * Return: last digit value of c
 *
 */
int print_last_digit(int c)
{
	int ls = c % 10;

	if (ls < 0)
		ls = -ls;
	_putchar(ls + '0');
	
	return (ls);
}
