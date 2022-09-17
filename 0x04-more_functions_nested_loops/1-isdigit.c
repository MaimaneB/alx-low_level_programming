#include "main.h"
#include <stdio.h>

/**
* _isdigit - checks whether the character is a digit or not 
* @c: tested character 
* Return: Always 0
*/

int _isdigit(int c)
{
	char c; 

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	
	return (0);
}
