#include "main.h"

/**
* *_memcpy - copy memory area
*
* @dest: a pointer to a character - destination string
* @src: a pointer to a character - source string
* @n: an integer - the bytes of memory
* Return: the pointer s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
