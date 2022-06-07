#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: nothing.
 */
void times_table(void)
{
int i, j;
int multiplication = 0;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
multiplication = (i * j);
if (multiplication < 10)
{
if (j != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(multiplication + '0');
}
else
{
_putchar(' ');
_putchar((multiplication / 10) + '0');
_putchar((multiplication % 10) + '0');
}
if (j != 9)
_putchar(',');
}
_putchar('\n');
}
}
