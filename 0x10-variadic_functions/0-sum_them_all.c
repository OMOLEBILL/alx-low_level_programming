#include "variadic_functions.h"
/**
 * sum_them_all - sums the number of arguments
 * @n: number of arguements
 * Return: SUm of the arguements
 **/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
        va_list n;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}

	

