#include "main.h"

/**
 * main - function that prints the sign of a number.
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 *
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
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
