#include "main.h"

/**
 * void swap_int - swaps the values of 2 integers
 * @a: pointer to an int
 * @b: pointer to an int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int swap = *a;
*a = *b;
*b = swap;
}
