#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * using only putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digitNbr = 0;

	while (digitNbr < 10)
	{
		putchar(digitNbr + '0');
		digitNbr++;
	}
	putchar('\n');

	return (0);
}
