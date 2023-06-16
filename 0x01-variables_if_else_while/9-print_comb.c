#include <stdio.h>

/**
 * main - Entry point
 * Prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digitNbr = 0;

	while (digitNbr <= 9)
	{
		putchar(digitNbr + '0');
		if (digitNbr < 9)
		{
			putchar(',');
			putchar(' ');
		}
		digitNbr++;
	}
	putchar('\n');
	return (0);
}
