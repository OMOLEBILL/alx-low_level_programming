#include "main.h"

/**
 * print_most_numbers - prints most numbers except 4&2
 */
void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
		       _putchar(a);
	}
        _putchar('\n');
}
