#include <limits.h>
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && !started)
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			if (sign == 1 && (result > (INT_MAX - digit) / 10))
				return INT_MAX;
			if (sign == -1 && (result > (-(INT_MIN + digit)) / 10))
				return INT_MIN;

			result = result * 10 + digit;
			started = 1;
		}
		else if (started)
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
