#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	if (argc != 0)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}
	}
	else if (argc == 0)
	{
		return (0);
	}
	printf("%d\n", add);
	return (0);
}
