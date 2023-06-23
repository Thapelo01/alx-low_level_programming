#include "main.h"
/**
 * print_diagona - Draws a diagonal line according to parameter
 * @n: The # of times to print diagonal line
 * Return: empty
 */
void print_diagona(int n)
{
	int x, yy;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
