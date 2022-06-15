#include "main.h"

/**
 * _strncopy - copy two strings
 * @dest: first string pointer
 * @src: second string pointer
 * @n: an int variable
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while(i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while ( i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
