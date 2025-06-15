#include <stdio.h>
/**
 * main - entyr
 * Description: This program generates all the alphabet twice
 * It then prints a corresponding message based on the  alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;
	char z;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (z = 'A'; z <= 'Z'; z++)
	{
		putchar(z);
	}

	putchar('\n');
	return (0);
}
