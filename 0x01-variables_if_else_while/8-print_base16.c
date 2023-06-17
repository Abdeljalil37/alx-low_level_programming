#include <stdio.h>

/**
 * main - Entry point, prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nbr;
	char alphabet = 'a';

	while (nbr <= 9)
	{
		putchar(nbr + '0');
		nbr++;
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
