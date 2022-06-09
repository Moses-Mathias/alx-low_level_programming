#include "main.h"
/**
 * more_numbers - print 0-14 ten times
 * @void: Returns nothing
 * Return: void
 */

void more_numbers(void)
{
char n;
int x;
while(n = 48 && n <= 57)
{
for (x = 0; x <= 14; x++)
{
if (x > 9)
{
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
}
_putchar('\n');
}
}
