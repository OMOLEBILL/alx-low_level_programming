#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iteriates through eery element of an array
 * @array: pointer to the array
 * @size: the size of the array
 * @action: the function
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
