#include <stdio.h>
#include "main.h"

/**
* print_to_98 - print to 98
*
* @n: is an integer
*
* Return: always 0
*/

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
		}
	}
}
