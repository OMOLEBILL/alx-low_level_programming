#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: input string
 * @src: inpput string
 * @n: number of time to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
