#include <stdlib.h>
/**
 * *_calloc - allocates memry to array
 * @nmemb: number of elements
 * @size: size of the array
 * Return: the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(mem + i) = 0;
	return ((void *)mem);
}
