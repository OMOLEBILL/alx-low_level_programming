#include <stdlib.h>
#include "main.h"
/**
 **array_range - arranges the arrasy
 * @min: the minimum number given
 * @max: the max number given
 * Return: the arrays in order
 **/
int *array_range(int min, int max)
{
	int *j;
	int i, no;

	if (min > max)
		return (NULL);
	no = (max - min) + 1;
	j = malloc(no * sizeof(*j));
	if (j == NULL)
		return (NULL);
	for (i = 0; i < no && min <= max; i++, min++)
		*(j + i) = min;
	return (j);
}
