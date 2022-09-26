#include "main.h"

/**
 * _strchr - function to locate a character within a string
 * @s: string to assess
 * @c: character to assess
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	 int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
