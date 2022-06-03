#include <stdio.h>

/**
 * main -  program that prints all the numbers of base 16 in lowercase
 * Only use the putchar function
 * Return: 0
 */

int main(void)
{
int n = 48;
int hex_num = 'a';
while (n <= 57)
{
putchar(n);
n++;
}
while (hex_num <= 'f')
{
putchar(hex_num);
hex_num++;
}
putchar('\n');
return (0);
}
