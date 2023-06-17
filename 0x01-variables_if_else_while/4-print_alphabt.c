#include <stdio.h>

/**
 * main - Entry point: prints alphabet in lowercase except 'e' & 'q'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabetLower = 'a';

	while (alphabetLower <= 'z')
	{
		if (alphabetLower != 'e' && alphabetLower != 'q')
		{
			putchar(alphabetLower);
		}
		alphabetLower++;
	}
	putchar('\n');

	return (0);
}
