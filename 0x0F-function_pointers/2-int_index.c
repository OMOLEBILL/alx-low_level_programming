#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - returns the index of 1st appearance
 * @array: array of the search items
 * @size: size of the array
 * @cmp: function to compare
 * Return: the 1st occurance of the elemnt
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
