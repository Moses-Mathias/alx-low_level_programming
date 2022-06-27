#include "main.h"
#include <stdlib.h>

/**
 * create_array: function that creates an array
 * of characters, and initializes with specific char
 * @size: integer value
 * @c: character value
 *
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
unsigned int n;
char *ar;
if (size == 0)
	return (NULL);
ar = malloc(sizeof(char) * size);
if (ar == NULL)
	return (NULL);
n = 0;
while (i < size)
{
ar[n] = c;
n++;
}
return (ar);
}
