#include <stdio.h>

/**
 * main - Entry point
 * Prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nbr1, nbr2;

	for (nbr1 = 0; nbr1 < 9; nbr1++)
	{
		for (nbr2 = nbr1 + 1; nbr2 < 10; nbr2++)
		{
			putchar(nbr1 + 48);
			putchar(nbr2 + 48);
			if (nbr1 != 8 && nbr2 != 0)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
