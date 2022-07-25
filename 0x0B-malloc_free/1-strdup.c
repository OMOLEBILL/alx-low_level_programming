#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a string
 * @str: the string to be used
 * Return: pointer to the sring
 **/
char *_strdup(char *str)
{
	char *string;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != 0; i++)
		;
	string = (char *)malloc(sizeof(char) * (i + 1));

	if (string == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		string[j] = str[j];
	return (string);
}
