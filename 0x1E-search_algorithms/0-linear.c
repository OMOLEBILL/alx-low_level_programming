#include "search_algos.h"
/**
 * linear_search - returns the index of the value
 * @array:  is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index where the value is located
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int flag = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			flag = 1;
			return (i);
		}
	}
	if (flag == 0)
		return (-1);
	return (i);
}
