#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string pointer
 * @src: string pointer
 * @n: integer input
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j = 0;
while(dest[i] != '\0')
{
i++;
}
while(j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
