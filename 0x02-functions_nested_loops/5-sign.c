#include "main.h"

/**
 * print_sign - prints + if >  0 , prints - if < 0
 *
 * @n: ASCII Character
 *
 * Return: 1, 0 or -1 if positive/ negative
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar(43);
		return (1);
	}
	else if (n <1)
	{
		_putchar(45);
		return (-1);
	}
	else 
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
