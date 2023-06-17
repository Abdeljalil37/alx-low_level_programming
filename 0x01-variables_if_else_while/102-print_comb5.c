#include <stdio.h>

/**
 * main - Entry point
 * Prints all possible different combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nbr1, nbr2;

	for (nbr1 = 0; nbr1 < 100; nbr1++)
	{
		for (nbr2 = nbr1 + 1; nbr2 < 100; nbr2++)
		{
			putchar((nbr1 / 10) + 48);
			putchar((nbr1 % 10) + 48);
			putchar(32);
			putchar((nbr2 / 10) + 48);
			putchar((nbr2 % 10) + 48);
			if (nbr1 != 98)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
