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
	int i, count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
