#include "functions_pointers.h"
#include <stdlib.h>
/**
 * print-name  - prints the name
 * @name: name to print
 * @f: function to print name
 **/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
