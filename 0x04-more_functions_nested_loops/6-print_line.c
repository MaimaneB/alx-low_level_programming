#include "main.h"
#include <stdio.h>

/**
 * print_line - a function that prints a straight line in the terminal
 * @n: input number of times to print line
 * Return: a straight line
 */

void print_line(int n)
{
	 int sl;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sl = 1; sl <= n; sl++)

		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
