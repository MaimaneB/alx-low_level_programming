 #include "main.h"

/**
 * _strlen_recursion - Returns the length of the string 
 * @s: the string to measure 
 *
 * Return: the length of the string 
 */

int _strlen_recursion(char *s)
{
	int len = 0; 
	if (*s)
	{
		len++; 
		len += _strlen_recursion(s + 1); 
	}
