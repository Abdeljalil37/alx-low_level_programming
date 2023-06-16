#include <stdio.h>

/**
 * main - Entry point
 * Prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nbr1, nbr2, nbr3;

	for (nbr1 = 0; nbr1 < 9; nbr1++)
	{
		for (nbr2 = nbr1 + 1; nbr2 < 10; nbr2++)
		{
			for (nbr3 = nbr2 + 1; nbr3 < 10; nbr3++)
			{
				putchar(nbr1 + 48);
				putchar(nbr2 + 48);
				putchar(nbr3 + 48);
				if (nbr1 != 7 && nbr2 != 9 && nbr3 != 0)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
