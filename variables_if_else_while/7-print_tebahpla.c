#include <stdio.h>
/**
 * main - entyr
 * Description: This program generates the nalphabet in reverse
 * It then prints a corresponding message based on the task
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}

	putchar('\n');
	return (0);
}
