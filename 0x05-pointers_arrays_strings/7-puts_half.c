#include "main.h"
/**
 * puts2 - Prints every other char of a string
 * @str: The string to be treated
 * Return: void
 */

void puts2(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
	j++;
	}
	if (j % 2 == 1)
	{
	k = (j - 1) / 2;
	k += 1;
	}
	else
	{
	k = j / 2;
	}

	for (; k < j; j++)
	{
	_putchar(str[k]);
	}
	_putchar('\n');
}
