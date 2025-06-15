#include <stdio.h>
/**
 * main - entyr
 * Description: This program generates the base sixteen companenets
 * It then prints a corresponding message based on the task
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}

	putchar('\n');
	return (0);
}
