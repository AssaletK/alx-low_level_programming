#include <stdio.h>

/**
* main - main function
*
* Return: 0
*/

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
