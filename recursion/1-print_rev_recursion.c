#include <unistd.h>

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: the string to reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	write(1, s, 1);
}
