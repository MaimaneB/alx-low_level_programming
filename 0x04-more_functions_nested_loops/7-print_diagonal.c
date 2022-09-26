#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - function used to print a diagonal line on the terminal
 * @n: number of times the line should be printed
 * Return: a diagonal line
 */

void print_diagonal(int n)
{
	int dl, sl;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (dl = 1; dl <= n; dl++)

		{
			for (sl = 1; sl < dl; sl++)

			{
				_putchar(* *);

			}
			_putchar(*\\*);

			_putchar(*\n*);

		}
	}
}
