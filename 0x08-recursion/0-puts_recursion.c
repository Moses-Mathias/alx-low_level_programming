#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * @s: pointer to a character
 * Return: nothing
 */

void _puts_recursion(char *s)
{
    int i;
    i = 0;
    while (*(s + i) != '\0')
    {
        (_putchar(*(s + i)));
        i++;
    }
    _putchar("\n");
}
