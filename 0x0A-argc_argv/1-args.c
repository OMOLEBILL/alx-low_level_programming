#include <stdio.h>
/**
 * main - prints the number of arguements
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 
 **/
int main (int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	return (0);
}
