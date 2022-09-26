#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if the character is uppercase or not
 * @c: the character to be tested
 * Return: 1 upon success, otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))

	{
		return (1);
	}
	else
		return (0);
}
