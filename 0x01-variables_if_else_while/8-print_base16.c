#include <stdio.h>

/**
* main - main function
*
* Return: 0
*/

int main(void)
{
	char c = 97;
	char C = 48;

	while (C <= 57)
	{
		putchar(C);
		C++;
	}
	while (c <= 102)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
