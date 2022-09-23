#include "main.h"
#include <stdio.h>

/**
* _strncpy - C function to copy the string, including
* the terminating null byte, using at most an inputted number of bytes.
* if the length of the source string is less than the maximum byte number
* then the remainder of the destination string is filled with null bytes.
* 'strncpy' is the standard library function.
* @dest: the buffer storing the string value
* @src: the source string
* @n: max number of byte copied
* Return: returns the output
*/

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
