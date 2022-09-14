#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - this function prints every minute of jack_bauers day
 * @n: beginning at 00:00 to 23:59
 * and: resets the mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int minutes_remainder;
	int hours_remainder;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	minutes_remainder = minutes % 10;
	hours_remainder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_remainder + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(minutes_remainder + '0');
	minutes++;
	_putchar('\n');
	}
	hours++;
	minutes = 0;
}
}
