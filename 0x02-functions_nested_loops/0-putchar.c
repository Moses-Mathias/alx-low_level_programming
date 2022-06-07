#include "main.h"

/**
 * main - A program that prints "_putchar"
 * 
 * return: 0
 */

int main(void)
{
int i;
char p[] = "_putchar";
for (i = 0; i < 9; i++)
{
_putchar(p[i]);
}
_putchar('\n');
return (0);
}
