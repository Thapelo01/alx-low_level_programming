#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - Takes a date and prints how many days are there
 *@day: days of month
 *@year: year
 *@month: months days
 * Return: void
 */
void print_remaining_days(int month, int day, int year);
{
	if ((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0))
	{
	if (month >= 3 && day >= 60)
	{
	day++;
	}
	printf("Day of year: %d\n", day);
	printf("Remaining year: %d\n", 366 - day);
	}
	else
	{
	if (month == 2 && day == 60)
	{
	printf("Invalid: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
	printf("Day of the year: %d\n", day);
	printf("Remaining year: %d\n", 365 - day);
	}
	}
}
