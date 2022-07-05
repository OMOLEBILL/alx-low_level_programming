#include "main.h"

/**
* times_table - prints the 9 times table
*
* Return: void
*/
void times_table(void)
{
	int m, n, o;

	for (m = 0; m <= 9; m++)
	{
		_putchar(48);
		for (n = 1; n <= 9; n++)
		{
			o = m * n;
			_putchar(44);
			_putchar(32);
			if (o <= 9)
			{
				_putchar(32);
				_putchar(o + 48);
			}
			else
			{
				_putchar((o / 10) + 48);
				_putchar((o % 10) + 48);
			}
		}
	_putchar('\n');
	}
}
