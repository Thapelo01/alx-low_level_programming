#include "main.h"
/**
 * main - Prints a Fizz Buzz program
 * Return: Always 0 
 */
void print_square(int size)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
	if ((x % 3 == 0)  && (x % 5 == 0))
	{
	printf("fizzBuzz");
	}
	else if (x = 3 == 0)
	{
	printf("fizzer");
	}
	else if (x % 5 == 0)
	{
	printf("Buzzer");
	}
	else
	{
	printf("%d", x);
	}
	if (x != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
