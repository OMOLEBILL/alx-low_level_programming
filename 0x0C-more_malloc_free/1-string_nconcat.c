#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - conctatenates two string
 * @s1: first string
 * @s2: second strings
 * @n: limit of s2
 * Return: pointer to the string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *prt;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	prt = malloc(sizeof(char) * (i + n + 1));
	if (prt == NULL)
		return (NULL);
	i = j = 0;

	while (s1[i] != '\0')
	{
		prt[i] = s1[i];
		i++
	}
	while (j < n && s2[j] != '\0')
	{
		prt[i] = s2[j];
		i++, j++;
	}
	prt[i] = '\0';
	return (prt);
}
