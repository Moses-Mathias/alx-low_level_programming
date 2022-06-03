#include <stdio.h>

/**
 * main -  program that prints all possible combinations of single-digit
 * Numbers must be separated by ,followed by a space
 * Numbers should be printed in ascending order
 * Use only the putchar function 4 times max
 */

int main(void)
{
int n = 48;
int comma_ascii = 44;
while (n <= 57)
{
putchar(n);
if (n != 57)
{
putchar(comma_ascii);
putchar(32);
}
n ++;
}
putchar('\n');
return (0);
}
