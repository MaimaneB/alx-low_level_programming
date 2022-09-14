#include "main.h"
/**
 *_islower - function checks lowercase characters
 *
 * @c: int to be used for argument
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
