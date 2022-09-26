#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - this searches the string for any sets of bytes
 * @s: string to check
 * @accept: string to evaluate against
 *
 * Return: pointer to byte in s that matches otherwise null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);

}

