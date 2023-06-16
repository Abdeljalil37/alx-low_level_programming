#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, gives a random number to an int variable n each time
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n");
	else if (n > 0)
		printf("%d is positive\n");
	else if (n == 0)
		printf("%d is zero");
	return (0);
}