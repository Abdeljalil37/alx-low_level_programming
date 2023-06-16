#include <stdio.h>

/**
 * main - Entry point: prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabetLower = 'a';
	char alphabetUpper = 'A';

	while (alphabetLower <= 'z')
	{
		putchar(alphabetLower);
		alphabetLower++;
	}
	while (alphabetUpper <= 'Z')
	{
		putchar(alphabetUpper);
		alphabetUpper++;
	}
	putchar("\n");

	return (0);
}
