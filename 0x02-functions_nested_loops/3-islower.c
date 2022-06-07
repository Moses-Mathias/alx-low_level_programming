#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: The input character to check
 * Return: int.
 */

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
