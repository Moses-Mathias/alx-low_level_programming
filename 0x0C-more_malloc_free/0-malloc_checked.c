#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of int
 * Return: pointer to allocated memory or exit with 98
 */

void *malloc_checked(unisgned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
	exit(98);
return (ptr);
}
