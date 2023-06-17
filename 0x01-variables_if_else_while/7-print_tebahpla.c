#include <stdio.h>

/**
 * main - Entry point, prints the lowercase alphabet in reverse
 * You can only use the putchar function twice
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabetLower = 'z';

	while (alphabetLower >= 'a')
	{
		putchar(alphabetLower);
		alphabetLower--;
	}
	putchar('\n');

	return (0);
}
