#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9 without 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char digits[] = "01356789\n";
	int i = 0;

	while (digits[i] != '\0')
	{
		_putchar(digits[i]);
		i++;
	}
}
