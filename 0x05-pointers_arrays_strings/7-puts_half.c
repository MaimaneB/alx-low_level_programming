cat > 8-print_array.c
#include "main.h"
#include <stdio.h>

/**
* print_array - prints n element of array 
* @a: array 
* @n: number of elements 
* Return: null
*/

void print_array(int *a, int n)
{
	int inc;

	int inc;
	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n -1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar(10);
}
