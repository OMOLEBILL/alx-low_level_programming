#include "main.h"
/**
 * _strlen_recursion - prints length of string
 * @s: pointer to the string
 * Return: the length of the string
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
