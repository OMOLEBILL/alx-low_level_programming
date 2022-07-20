#include "main.h"
/**
 * _pow_recursion - prints a power of a number
 * @x: input to be powered
 * @y: the power
 * Return: the power of two nums
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y-1));
}
