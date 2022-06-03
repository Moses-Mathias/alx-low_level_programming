#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 * Use putchar function only twice
 * Return: 0
 */

int main(void)
{
int lowercase = 'a';
while (lowercase <= 'z')
{
if (lowercase == 'e' || lowercase == 'q')
{
lowercase += 1;
}
else
{
putchar(lowercase);
lowercase += 1;
}
}
putchar('\n');
return (0);
}
