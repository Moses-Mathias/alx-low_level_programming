#include "main.h"

/**
 * print_sign - function that prints the sign of a number..
 * @n: The input number to check
 * Return: int.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
_putchar(44);
_putchar(32);
return (1);
_putchar('\n');
}
else if (n < 0)
{
_putchar(45);
_putchar(44);
_putchar(32);
return(-1);
_putchar('\n');
}
else
{
_putchar(48);
_putchar(44);
_putchar(32);
return(0);
_putchar('\n');
}
}
