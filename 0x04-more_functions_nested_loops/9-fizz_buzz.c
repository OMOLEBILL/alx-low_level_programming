#include <stdio.h>

/**
 * main - prints fizz/ buzz or fizzbuzz depending
 *
 * Return: Always 0 sucess
 */
int main(void)
{
	 int a;
	  
	 for (a = 1; a <= 100; a++)
	 {
		 if (a % 3 == 0 && a % 5 == 0)
			 printf("%s ", "FizzBuzz");
		 else if (a % 5 == 0)
			 printf("%s ",  "Buzz");
		 else if (a % 3 == 0 && a % 5 == 0)
			 printf("%s ", "Fizz");
		 else
			 printf("%d ",  a);
	 }
	printf("\n");
	return (0);
}
			 
