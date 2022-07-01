#include <stdio.h>

/**
* main - main function
*
* Return: 0
*/

int main(void)
{
	char c = 97;
	char C = 65;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	while (C <= 90)
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
