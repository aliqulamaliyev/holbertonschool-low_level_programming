#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (alphabet[i] != '\0')
	{
		_putchar(alphabet[i]);
		i++;
	}
}
int main(void)
{
	print_alphabet();
	return (0);
}

