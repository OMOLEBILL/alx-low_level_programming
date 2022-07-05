#include "main.h"

/**
 * _isalpha - Check wether a number is alphabet
 *
 * @c: ASCII character
 *
 *Return: 1 if letter is alphabet else returns 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

