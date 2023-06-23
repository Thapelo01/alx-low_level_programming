#include "main.h"
/**
 * _isdigit - Checks if a char is a digit
 *@c: The # to be checked
 * Return: 1 for a char that will be a digit or 0 for anything
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
