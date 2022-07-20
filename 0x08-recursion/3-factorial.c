#include "main.h"

/**
* factorial - return the factorial of a given number
*
* @n: a given number
*
* Return: always 0
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
