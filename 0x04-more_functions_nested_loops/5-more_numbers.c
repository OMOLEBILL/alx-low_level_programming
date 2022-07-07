#include "main.h"

/**
 * more_numbers - Print numbers from 1- 14 10 times
 */
void more_numbers(void)
{
	int a = 0;
	char c;

	for (a = 0; a < 10; a++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
