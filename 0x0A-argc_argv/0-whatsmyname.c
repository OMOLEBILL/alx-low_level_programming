#include <stdio.h>
/**
 * main - a function that prints its name
 * @argc: argument count
 * @argv: arguement vector
 * Return: always 0 suceess
 **/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
