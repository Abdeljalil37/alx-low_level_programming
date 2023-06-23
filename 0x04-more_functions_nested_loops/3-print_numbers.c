#include "main.h"


/**
 * print_numbers - Prints the numbers from 0 to 9.
 */
void print_numbers(void)
{
	int nbr;

	/* Loop through ASCII values for numbers 0 to 9 */
	for (nbr = 48; nbr < 58; nbr++)
	{
		_putchar(nbr);
	}

	_putchar('\n');
}

