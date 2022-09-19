#include "main.h"
#include <stdio.h>

/**
* _puts - prints a string
* @str: string
*
* Description: print a string
* On success: no error to be returned
*/

void _puts(char *str)
{

	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
