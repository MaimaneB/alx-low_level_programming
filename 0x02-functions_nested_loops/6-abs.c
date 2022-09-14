#include "main.h"
#include <stdio.h>
/**
 * _abs - The function computes the absolute value of an int 
 * @c: is the int to be used for the argument of a function
 * Return: 0 
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
else
return (c * -1);
}
