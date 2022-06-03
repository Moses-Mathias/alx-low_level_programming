#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse.
 * Only use putchar function
 * Return: 0
 */

int main(void)
{
int n = 122;
while (n > 96)
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
