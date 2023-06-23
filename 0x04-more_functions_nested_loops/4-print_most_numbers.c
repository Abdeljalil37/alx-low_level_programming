#include "main.h"

/**
 * print_most_numbers - Prints most numbers from 0 to 9.
 *
 * This function prints all numbers from 0 to 9, except 2 and 4.
 */
void print_most_numbers(void)
{
	int nbr;

	for (nbr = 48; nbr < 58; nbr++)
	{
		if (nbr != 50 || nbr != 52)
			_putchar(nbr);
	}
	_putchar('\n');
}
