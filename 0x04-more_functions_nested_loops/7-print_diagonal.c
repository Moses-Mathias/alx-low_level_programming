#include "main.h"

/**
 * print_diagonal: function that draws a diagonal line
 * @n: variable for an integer
 * Return: print_diagonal
 */
void print_diagonal(int n)
{
int i;
int j;
for (i = 0; i < n; i++)
{
for (j = 0; j <= i; j++)
{
if (i ==j)
{
_putchar('\\');
_putchar('\n');
}
else
{
_putchar(' ');
}
}
}
if ( n <= 0)
	_putchar('\n');
}
