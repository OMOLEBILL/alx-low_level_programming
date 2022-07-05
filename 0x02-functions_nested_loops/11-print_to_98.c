#include "main.h"

/**
* print_to_98 - prints all natural numbers
* from n to 98, followed by a new line
*
* @n: input number.
*
* Return: void.
*/
void print_to_98(int m)
{
	if (m > 98)
	{
	for (; m > 98; m--)
		{
		printf("%d, ", n);
		}
	}
	else if (m < 98)
	{
		for (; m < 98; m++)
		{
		printf("%d, ", m);
		}
	}
	printf("%d\n", m);
}
