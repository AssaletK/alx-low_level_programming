#include "main.h"

/**
* _puts - displays string
*
* @str: pointer to a char
*
* Return: nothing
*/

void _puts(char *str)
{
	int n = 0;

	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}

