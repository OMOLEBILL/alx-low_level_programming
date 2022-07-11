#include "main.h"

/**
 * swap_int - swaps the values of two intergers
 * @a: one of the integers to be swapped
 * @b: the second integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
	
	
