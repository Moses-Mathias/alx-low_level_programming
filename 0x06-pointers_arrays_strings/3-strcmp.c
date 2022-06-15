#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string pointer
 * @s2: second string pointer
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
int i;
int cmp;
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
cmp = s1[i] - s2[i]; 
return cmp;
}
i++
}
return (0);
}
