#include "main."
#include <stdio.h>

/**
 * print_most_numbers - function used to print the numbers 0 - 9
 *
 * Return: 0 - 9, excluding 2 and 4 followed by a new line.
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
			putchar(x + '0');
	}
	_putchar('\n');
}
