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
	int count, i, j;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	j = 0;
	for (i = count; ; i++)
	{
		if (j <= n - 1)
		{
			dest[i] = src[j];
			j++;
		}
		else
			break;
	}
	return (dest);
}
