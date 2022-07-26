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

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
