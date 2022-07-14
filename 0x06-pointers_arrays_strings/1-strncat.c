#include "main.h"

/**
* *_strncat - concatenate two strings
*
* @dest: destination string, pointer to a char
* @src: source string, pointer to a char
* @n: is an integer, number of element of src
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, count;

	count = 0;
	while (dest[count] != 0)
		count++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[count + i] = src[i];
	dest[count + i] = '\0';
	return (dest);
}
