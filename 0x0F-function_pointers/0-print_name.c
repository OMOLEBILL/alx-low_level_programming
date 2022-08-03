#include <stdlib.h>
#include "function_pointers.h"
/**
 * print-name  - prints the name
 * @name: name to be printed
 * @f: array to function to print name
 **/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
