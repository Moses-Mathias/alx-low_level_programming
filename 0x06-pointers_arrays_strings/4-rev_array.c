#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i;
int rev;

for (i = 0; i < n--; i++)
{
rev = a[i];
a[i] = a[n];
a[n] = rev;
}
}
