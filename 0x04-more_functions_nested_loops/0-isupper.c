#include "main.h"
#include <stdio.h>

/**
 * _isupper - this function checkes if the character is uppercase or not
 * @c: the character to be tested 
 * Return: 1 upon success, otherwise 0 
 */

int __isupper(int c) 
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
return (0);
}