#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of int
 * Return: pointer to allocated memory or exit with 98
 */

void *malloc_checked(unsigned int b)
{
	void *al;

	al = malloc(b);
	if (al == NULL)
		exit(98);
	else
		return (al);
}
