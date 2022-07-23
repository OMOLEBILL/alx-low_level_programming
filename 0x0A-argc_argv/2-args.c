#include <stdio.h>
/**
 * main - prints arguments
 * @argc: size of the array
 * @argv: array of srings
 * Return: zero sucees
 **/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
