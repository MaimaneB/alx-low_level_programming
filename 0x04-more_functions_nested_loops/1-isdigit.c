#include "main.h"
#include <stdio.h>

/**
* _isdigit - checks whether the character is a digit or not 
* @c: tested character 
* Return: Always 0
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
