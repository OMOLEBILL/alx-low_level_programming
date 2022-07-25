#include "main.h"
#include <stdlib.h>
/**
 * str_concat - add two strings
 * @s1: 1st string
 * @s2: second string
 * Return: pointer to the new string
 **/
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, k, v;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; i != '\0'; i++)
		;
	for (j = 0; j != '\0'; j++)
		;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		str[k] = s1[k];

	v = j;
	for (j = 0; j <= v; k++, j++)
		str[k] = s2[j];
	return (str);
}
