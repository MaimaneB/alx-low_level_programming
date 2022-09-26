#include "main.h"

/**
 * print_square - # character used to print square
 * @size: the size of the square
 */

void print_square(int size)
{
	int h, w;

	if (size > 0)
	{
		for (h = 0; h <= size; h++)
		{
		for (w = 0; w <= size; w++)
		{
		putchar('#')
		}
		if (h == size 1)
		{
		continue;
		}
		putchar('\n');
		}
	}
}
