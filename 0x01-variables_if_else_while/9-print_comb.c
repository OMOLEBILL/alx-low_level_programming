#include <stdio.h>

/**
 * main - a program that prints all possible combinations of single-digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
		if (c < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
