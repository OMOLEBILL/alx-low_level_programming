#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - returns the address
 * @b: the number of bytes
 * Return: a pointer to the allocated memory
 **/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
