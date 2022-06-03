#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * Use the putchar function only twice
 * Return: 0
 */

int main(void)
{
int alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet += 1;
}
putchar('\n');
return (0);
}
