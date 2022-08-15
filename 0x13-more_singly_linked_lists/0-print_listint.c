#include "list.h"
#include <stdio.h>

/**
 * print_listint - prints elements of a list
 * @h: pointer to the node
 * Return:the number of elements in the list
 **/
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num ++;
		printf("%d\n", h -> n);
		h = h->next;
	}
	return (num);
}
