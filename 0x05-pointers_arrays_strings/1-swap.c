#include <stdio.h>
/**
 * swap_int - swaps the value of two integers
 * @a: The first integer is swapped
 * @b: The second interger is swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swap the value of two integers*/
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
