#include "main.h"
#include <stdio.h>

/**
* main - principal function
*
* @argc: int type, count arguments
* @argv: char type, string pass in arguments
*
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
