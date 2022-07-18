#include "main.h"

/**
 *_memset - afuction that prints a value
 *@s: the adrress of the value
 *@b: the value to printed
 *@n the number of bytes to be printed
 *
 *Return: s the address of the bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}

	return (s);
}
