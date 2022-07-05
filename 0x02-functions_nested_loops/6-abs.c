#include "main.h"

/**
* _abs - basolute value
*
* @n: is an integer
*
* Return: always 0
*/

int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
