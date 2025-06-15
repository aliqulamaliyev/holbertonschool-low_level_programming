#include <stdio.h>
/**
 * main - entyr
 * Description: This program generates th number zero to ten
 * It then prints a corresponding message based on the  task.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}

	printf("\n");
	return (0);
}
