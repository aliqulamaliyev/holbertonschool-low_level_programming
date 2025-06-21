#include "main.h"
/**
 * _isdigit - checks for digit beetwen 0 and 9
 * @c: the digit to check (as an int)
 *
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
