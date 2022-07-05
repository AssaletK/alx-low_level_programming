#include "main.h"

/**
* _islower - check for lowercase character
*
* @c: is a ASCII character
*
* Return: 1 if c is lowercase, 0 if not
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
