#include "main.h"

/**
 * _strlen - checks the legth of a string
 * @s: the string to be checked
 * Return: the value of l
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}	 
