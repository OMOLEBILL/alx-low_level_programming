#include "alx.h"

/**
 * main - Print the word "_putchar"
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int i;
	char p[] = "Holberton";

	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}



			
