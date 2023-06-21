#include <stdio.h>

/**
 * main - search and prints the sum of the even-valued terms
 * starting with 1 and 2.
 * The numbers must be separated by commas, followed by a space ,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, c = 0, sum = 2;

	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			sum += c;
		}
	}
	printf("%ld\n", sum);

	return (0);
}
