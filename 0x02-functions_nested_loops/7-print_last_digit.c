#include "main.h"

/**
 * print_last_digit - this fucntion prints the last digit of no
 *
 * @n: ASCII Character
 *
 * Return: the last digit.
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		_putchar(-m + 48);
		return (-m);
	}
	else
	{
		_putchar(m + 48);
		return (m);
	}
}
