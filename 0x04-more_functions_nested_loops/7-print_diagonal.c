#include "main.h"

/**
 * print_diagonal - Prints a diagonal line,
 * using the backslash character '\'
 *
 * @n: The number of times the backslash should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\');
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
