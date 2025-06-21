#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	char digits[] = "01234567891011121314\n";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (digits[j] != '\0')
		{
			_putchar(digits[j]);
			j++;
		}
	}
}
