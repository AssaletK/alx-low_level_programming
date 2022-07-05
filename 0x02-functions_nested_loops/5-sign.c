#include "main.h"

/**
* print_sign - print sign of a number
*
* @n: is an integer
*
* Return: 1 if (+) and 0 if (-)
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
	_putchar('\n');
}
