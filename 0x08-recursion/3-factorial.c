#include "main.h"
#include <stdio.h>
/**
 * factorial - function for factorial
 * @n: pointer to an integer
 * Return: int
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	return (1);
return (n * factorial(n - 1));
}
