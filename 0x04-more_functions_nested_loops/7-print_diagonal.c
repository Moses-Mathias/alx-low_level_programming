#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 * @n: variable for an integer
 * Return: int
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
_putchar(32);
}
else
{
_putchar(' ');
}
}
}
if ( n <= 0)
	_putchar(32);
}
