#include "main.h"
#include <stdio.h>

/*
 * _isupper - checks for uppercase letters
 * @c: ASCII character
 * Return: Always 0 (suceess)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
