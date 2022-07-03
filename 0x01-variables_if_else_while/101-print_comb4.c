#include <stdio.h>
/**
* main - main function
*
* Return: 0
*/

int main(void)
{
	int i, j, k;

	j = 48;
	k = 48;
	i = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				if (i != j && j != k && i != k && i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
					{
						break;
					}
					putchar(44);
					putchar(32);
				}
			}
			k++;
		}
		j++;
	}
	i++;
	putchar('\n');
	return (0);
}
