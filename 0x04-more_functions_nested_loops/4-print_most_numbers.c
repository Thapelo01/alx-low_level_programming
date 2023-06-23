#include "main.h"
/**
 * print_numbers - Multiplies two #
 * Return: The result of multiplication between x param and y param
 */
void print_most_numbers(void)
{
	int x;
	
	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	_putchar('\n');
}
