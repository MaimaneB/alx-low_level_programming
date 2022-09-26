#include "main.h"

/**
 * _strspn - finds the length of a prefix substring
 * @s: string
 * @accept: strings to evaluate against
 *
 * Return: return the number of string bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
