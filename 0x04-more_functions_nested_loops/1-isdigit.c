#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks wether a number is between 0-9
 * @c: ASCII character
 * Return: Either 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}
