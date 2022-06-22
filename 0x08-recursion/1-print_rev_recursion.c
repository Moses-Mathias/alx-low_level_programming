#include "main.h"
/**
 * _print_rev_recursion - function to reverse a string
 * @s: pointer to a string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
    int i = 0;
    while (*(s + i) != '\0')
    {
        i++;
        i--;
    }
    while (i >= 0)
    {
        _putchar(*(s = i));
        i--;
    }
    _putchar("\n");
}
