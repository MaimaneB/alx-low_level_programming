#include "main.h"

/**
 * _memcpy - copy the memory area
 * @dest: area of the memory to be copied to
 * @src: source of the area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer of the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
