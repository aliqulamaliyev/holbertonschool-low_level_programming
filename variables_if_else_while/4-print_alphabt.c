#include <stdio.h>
/**
 * main - entyr
 * Description: This program generates all the alphabet without q and e
 * It then prints a corresponding message based on the  alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
	}

	putchar('\n');
	return (0);
}
