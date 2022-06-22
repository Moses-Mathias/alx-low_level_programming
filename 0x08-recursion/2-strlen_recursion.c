#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - function to return length of a string
 * @s: pointer to a string
 * Return: int
 */
int _strlen_recursion(char *s)
{
    int len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}
