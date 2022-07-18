#include "main.h"
/**
 *_memcpy - copies addresses from one 2 another
 *dest: the address to be copied to
 *src: the addres to be copied from
 *n: number of bytes to be copied

 *Return: dest 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = 0;

	while (n > 0)
	{
		dest[a] = src[b];
		a++;
		b++;
		n--;
	}

	Return (dest);
}
