#include "main.h"
#include <stdio.h>

/**
 * _abs - function that computes the absolute value of an integer.
 * @n: The input number to check
 * Return: int.
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (n * -1);
}
}
