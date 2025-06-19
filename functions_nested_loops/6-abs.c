#include "main.h"
/**
 * _abs - prints the absolute of a number
 * @c: the integer to compute
 *
 * Return: absalute value of c
 *
 */
int _abs(int c)
{
	if (c < 0)
		return (-c);
	else
		return (c);
}
