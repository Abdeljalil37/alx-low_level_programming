#include "main.h"

/**
 * more_numbers - Prints a series of numbers
 * with Betty style comments
 */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar(48 + (num / 10));
			_putchar(48 + (num % 10));
		}
		_putchar('\n');
	}
}
