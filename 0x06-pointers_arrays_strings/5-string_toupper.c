#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 *
 * Return: char
 */

char *string_toupper(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
if (s[i] != 97 && s[i] <= 122)
	s[i] = s[i] - ' ';
i++;
}
return (s);
}
