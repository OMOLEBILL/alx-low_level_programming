#include "main.h"
/**
 * factorial - returns a factorial
 * @n: the factorial
 * Return: the factorial
 **/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
