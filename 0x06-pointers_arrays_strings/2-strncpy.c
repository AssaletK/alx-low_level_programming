#include "main.h"

/**
* *_strncpy - copy strings
*
* @dest: destination string, pointer to a char
* @src: source string, pointer to a char
* @n: is an integer
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	for (i = 0; j < n && dest[i] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
