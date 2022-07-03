#include <stdio.h>
/**
* main - main function
*
* Return: 0
*/
int main(void)
{
	int i, j, k;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				k = 48;
				while (k < 58)
				{
					if (j != k && j < k)
					{
						putchar(k);
					}
					if (i == 55 && j == 56 && k == 57)
					{
						break;
					}
				}
				k++;
			}
		}
		j++;
	}
	i++;
	putchar('\n');
	return (0);
}
