#include "main.h"

/**
* print_diagonal - draw a diagonal line
*
* @n: number of times "\" is should be printed
*
* Return: nothing
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
