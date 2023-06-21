#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, jj, f, k1, h;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	jj = j / 1000000000;
	f = j % 1000000000;
	kk = k / 1000000000;
	h = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", kk + (h / 1000000000));
		printf("%lu", h % 1000000000);
		kk = kk + jj;
		jj = kk - jj;
		h = h + f;
		f = h - f;
	}

	printf("\n");

	return (0);
}
