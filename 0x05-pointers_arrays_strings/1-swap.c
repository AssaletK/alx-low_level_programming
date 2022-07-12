#include "main.h"

/**
* swap_int - swap two integers
*
* @a: is pointer to interger
* @b: is pointer to interger
* Return: Always 0
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
