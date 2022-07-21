#include "main.h"

/**
* is_prime_number - check prime number
*
* @n: an integer
*
* Return: 1 if yes or 0 if not
*/

int is_prime_number(int n)
{
	int i = 1;

	while (i > 0)
	{
		if (n == i && n % i == 0)
			return (1);
		else
			return (0);
		i++;
	}
}
