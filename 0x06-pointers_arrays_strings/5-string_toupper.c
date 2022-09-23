#include "main.h"
#include <stdio.h>

/**
 * string_toupper - chnages all lowercase letters of a string to uppercase
 * @str: parameter
 * @Return: returns a to character
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}

