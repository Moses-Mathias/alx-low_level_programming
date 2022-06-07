#include "main.h"
#include <stdio.h>

/**
 * main - function that adds two integers
 * returns the result
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
int add(int a, int b)
{
int addition;
addition = a + b;
return(addition);
}
