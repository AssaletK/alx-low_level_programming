#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print a dog struct
 * @d: d is a dog struct
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else if (d->age == 0 || d->name == NULL || d->owner == NULL)
	{
		if (d->age == 0)
		{
			printf("Age: (nill)");
		}
		else if (d->name == NULL)
		{
			printf("Name: (nill)");
		}
		else
		{
			printf("Owner: (nill)");
		}
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
