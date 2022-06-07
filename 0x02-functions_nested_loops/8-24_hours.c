#include "main.h"

/**
 * main - prints every minute of the day
 * starting from 00:00 to 23:59
 *
 * Return: Always 0.
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
