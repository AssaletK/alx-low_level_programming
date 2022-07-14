#include "main.h"

/**
* reverse_array - reverse elements of array
*
* @a: pointer to an integer
* @n: number of elements of the array
*
* Return: nothing
*/

void reverse_array(int *a, int n)
{
	int tmp, i;

	while (n >= 0)
	{
		i = 0;
		while (i < n -1 )
		{
			tmp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = tmp;
			i++;
		}
		n--;
	}
}
