#include "main.h"

/**
 * main - function that checks for alphabetic character.
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
int _isalpha(int c)
{
if ((c > 96 && c < 123 ) || (c > 64 && c <91))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
