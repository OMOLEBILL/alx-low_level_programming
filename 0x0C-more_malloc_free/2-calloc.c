#include "main.h"
#include <stdli.h>
/**
 * _calloc - allocate memory for an array
 * nmemb - number of elements 
 * size: size pf each elements
 * Return: pointer of the array
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (size == 0 || nmemb == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size ; i++)
		*(mem + i) = 0;
	return ((void *)mem);
}
