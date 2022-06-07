#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: The input character to check
 * Return: int.
 */

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
