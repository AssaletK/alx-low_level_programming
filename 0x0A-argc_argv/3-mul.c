#include <stdlib.h>
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

	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
