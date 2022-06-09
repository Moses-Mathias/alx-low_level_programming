#include "main.h"
/**
 * more_numbers - print 0 to 14 ten times
 * @void: Returns nothing
 * Return: void
 */

void more_numbers(void)
{
char n;
int x;
for (x = 0; x < 10; x++)
{
for (n = 0; n <= 14; n ++)
{
if (n > 9)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
