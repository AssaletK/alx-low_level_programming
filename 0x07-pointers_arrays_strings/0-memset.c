#include "main.h"

/**
* *_memset - fill memorywith a constante byte
*
* @s: a pointer to a character
* @b: a chacarter - the constant byte
* @n: an integer - the first bytes of memory
* Return: the pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
