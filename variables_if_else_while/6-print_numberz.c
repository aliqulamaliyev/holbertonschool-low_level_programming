#include <stdio.h>
/**
 * main - entyr
 * Description: This program generates the number between zero and ten
 * It then prints a corresponding message based on the task
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');
	return (0);
}
