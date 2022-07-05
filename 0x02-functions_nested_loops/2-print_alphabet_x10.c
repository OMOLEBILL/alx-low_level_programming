#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int a, b = 0;

	while (b <= 9)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		b++;
		_putchar('\n');
	}
}
