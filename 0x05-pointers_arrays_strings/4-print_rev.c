#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* print_rev - prints a string in descending order
* @s: string to reverse
* Return: null
*/

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
