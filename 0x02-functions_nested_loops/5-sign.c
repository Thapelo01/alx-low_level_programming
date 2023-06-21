#include "main.h"
/**
 * print_sign - Prints the sign of a number 
 * @n: The number to be chhecked
 * Return: 1 for + num, -1 fo a - num or 0 for anything
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
