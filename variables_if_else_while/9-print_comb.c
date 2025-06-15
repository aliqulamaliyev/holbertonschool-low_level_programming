#include <stdio.h>
/**
 * main - entyr
 * Description: This program generates all the combinations
 * It then prints a corresponding message based on the task
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');

		if (i != 8 || j != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
