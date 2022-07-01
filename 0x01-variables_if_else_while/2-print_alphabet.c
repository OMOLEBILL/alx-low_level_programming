#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print A-Z
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++){
		putchar(c);
		putchar('\n');}

return (0);
}
