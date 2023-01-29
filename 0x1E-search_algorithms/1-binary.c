#include "search_algos.h"
/**
 * print_array - prints an array
 * @array: the array we wana print
 * @low : the lowest index of the array
 * @high: the highest index of the array
 **/
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array:");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[high]);
}

/**
 * binary_search - searches through an array in binary format
 * @array: the array to search
 * @size : the lenghth of the array
 * @value: the value of the array we're looking for
 * Return: the index if found or -1 if not
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;
	int flag = 0;

	low = 0;
	high = size - 1;
	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			flag = 1;
			return (mid);
		}
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid;
	}
	if (flag != 1)
		return (-1);
	return (-1);
}
