#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit_string - checks if a string contains only digits
 * @s: the string to check
 *
 * Return: 1 if string is all digits, 0 otherwise
 */
int is_digit_string(char *s)
{
	int i = 0;

	if (s[0] == '\0')
		return (0);

	while (s[i])
	{
		if (!isdigit((unsigned char)s[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, value;

	for (i = 1; i < argc; i++)
	{
		if (!is_digit_string(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		value = atoi(argv[i]);
		sum += value;
	}

	printf("%d\n", sum);
	return (0);
}
