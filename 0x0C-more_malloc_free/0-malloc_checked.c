#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: positive integer
 * Return: pointer or 98 if fail
 */
void *malloc_checked(unsigned int b)
{
    int *p;

    p = malloc(b);
    if (p == NULL)
    {
        exit(98);
    }
    else
    {
        return(p);
    }
}