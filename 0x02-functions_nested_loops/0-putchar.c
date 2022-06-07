#include "main.h"

/**
 * main - A program that prints "_putchar"
 * Return: int
 * return: 0
 */

int main(void)
{
int i;
char p[] = "_putchar";
for (i = 0; i < 8; i++)
{
_putchar(p[i]);
}
_putchar('\n');
return (0);
}
