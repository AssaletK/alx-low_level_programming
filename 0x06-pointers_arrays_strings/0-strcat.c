#include "main.h"

/**
* *_strcat - concatenate two strings
*
* @dest: destination string, pointer to a char
* @src: source string, pointer to a char
*
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int n, i, j;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	j = 0;
	for (i = n; ; i++)
	{
		dest[i] = src[j];
		j++;
		if (src[j] == '\0')
			break;
	}
	return (dest);
}
