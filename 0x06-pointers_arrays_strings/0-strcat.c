#include "main.h"
#include <stdio.h>

/**
* _strcat - concatenates the string pointed by @src 
* to the end of teh string pointed to by @dest 
* @src: string to be concatenated upon 
* @dest: string to be appended 
* 
*
* Return: pointer to @dest
*/

char *_strcat(char *dest, char *src)
{

int index = 0, dest_len = 0;

	while(dest[index++])
		dest_len++;

	for(index = 0; src[index]; index++)
		dest[dest len++] = src[index];
	
	return (dest);
}
