#include "main.h"

/**
 * main - function that prints 10 times the alphabet, in lowercase,.
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet_x10();
return (0);
}
void print_alphabet_x10(void)
{
int i;
int n;
for (i = 0; i < 10; i++)
{
for (n = 97; n <= 122; n++)
_putchar(n);
}
_putchar('\n');
}
