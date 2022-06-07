#include "main.h"

/**
 * jack_bauer -  function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 * Return: nothing.
 */
int main(void)
{
    jack_bauer();
    return (0);
}
void jack_bauer(void)
{
int hours = 0;
int seconds = 0;
while (hours <=23)
{
while (seconds <= 59)
{
_putchar((hours / 10) + '0');
_putchar((hours % 10) + '0');
_putchar(58);
_putchar((seconds / 10) + '0');
_putchar((seconds % 10) + '0');
_putchar('\n');
seconds++;
}
hours++;
}
}
