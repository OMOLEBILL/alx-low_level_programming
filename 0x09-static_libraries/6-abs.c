#include "main.h"

/**
 * _abs - give the absolute value of a number
 *
 * @n: ASCII character
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
