#include "main.h"
/**
 * _islower - Checks for lowercase char
 * @c: The char to be chhecked
 * Return: 1 for lowercase char or 0 for anything eles
 */

int _islower(int c)
{
	if (c >= 97 && c<= 122)
	{
	return (1);
	}
	return (0);
}
