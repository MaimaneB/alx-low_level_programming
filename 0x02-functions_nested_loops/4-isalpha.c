#include "main.h"
/**
 * _isalpha - check if c is a letter, and if it is lowercase or uppercase
 * @c: the int to be used for the function argument
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
else

return (0);
}
