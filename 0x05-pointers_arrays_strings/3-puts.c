#include "main.h"
#include <unistd.h>
/**
 *_puts - prints a string
 *@str: the sring to be printed
 *Return: void
 */
void _puts(char *str)
{
	int n = 0;

	while (*(str + n) != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
