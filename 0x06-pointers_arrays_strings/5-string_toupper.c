#include "main.h"

/**
 * string_toupper - changes lowercse 2 upper
 * @b: pointer
 *
 * Return: b
 */
char *string_toupper(char *b)
{
	int a;

	a = 0;
	while (b[a] != '\0')
	{
		if (b[a] >= 'a' && b[a] <= 'z')
		{
			b[a] = b[a] - 32;
		}
		a++;
	}
	return (0);
}
