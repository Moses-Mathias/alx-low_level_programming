#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - function to return length of a string
 * @s: pointer to a string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
