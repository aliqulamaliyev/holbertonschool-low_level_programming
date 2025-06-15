#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entyr
 * Description: This program generates a random number,
 * checks if it is negative pososyive or zero
 * It then prints a corresponding message based on the  digit.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
