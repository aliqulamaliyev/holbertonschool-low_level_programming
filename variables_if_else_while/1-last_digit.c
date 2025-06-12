#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entyr
 * Description: This program generates a random number,
 * calculates its last digit, and checks if the last digit
 * is greater than 5, equal to 0, or less than 6 but not 0.
 * It then prints a corresponding message based on the last digit.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = n % 10;
	if (c > 5)
	{
		printf("Last digit of %d is %d and it is greater than 5", n, c);
	}
	else if (c == 0)
	{
		printf("Last digit of %d is %d and it is 0", n, c);
	}
	else
	{
		printf("Last digit of %d is %d and it is less than 6 but not 0", n, c);
	}
	return (0);
}
