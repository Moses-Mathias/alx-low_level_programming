#include "main.h"

/**
 * print_triangle - to print a triangle
 * @size - gives the size of the triangle
 *
 * Return: print_triangle
 */

void print_triangle(int size)
{
int row, column, k;
for (row = 0; row < size; row++)
{
for (column = size - row; column > 1; column --)
{
_putchar(' ');
}
for (k = row + column; k >= 1; k--)
{
_putchar('#');
}
}
_putchar('\n');
}
