#include "main.h"
/**
 * _isalpha - Checks for alphabetic char
 * @c: The char to be checked
 * Return: 1 for alphabetic char or 0 for anything eles
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
