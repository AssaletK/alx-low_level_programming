#include "main.h"

/**
* _strlen - return the length of a string
*
* @s: a pointer to char
*
* Return: Always 0
*/

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
