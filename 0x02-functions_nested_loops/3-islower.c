#include "main.h"

/**
 * main - function that checks for lowercase character.
 *
 *Returns 1 if c is lowercase
 * Returns 0 otherwise 
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
int _islower(int c)
{
if (c > 95 && c < 123)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
