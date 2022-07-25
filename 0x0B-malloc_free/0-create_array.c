#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: the character
 * Return: a pointer to the array
 **/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(c) * size);

	if (p == NULL)
		return(NULL);
	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
