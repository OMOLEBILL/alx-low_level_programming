#include "main.h"

/**
 * _islower - Checks wether a number is caps and returns
 * 1 or otherwise 0
 *
 * @c: ASCII character
 *
 * Return: 1 if uppercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{

		return (0);
	}
}
