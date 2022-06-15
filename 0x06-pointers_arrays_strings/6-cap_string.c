#include "main.h"

/**
 * cap_string - capitazes all words of a string
 * @s: input value
 *
 * Return: string
 */

char *cap_string(char *s)
{
int i;
i = 0;
if (s[0] >= 97 && s[0] <= 122)
{
s[0] = s[0] - 32;
}
for (i = 0; s[i] != '\0'; i++)
{
switch (s[i])
{
	case 44:
	case 59:
	case 46:
	case 33:
	case 63:
	case 34:
	case 40:
	case 41:
	case 123:
	case 125:
	case 32:
	case '\n':
	case '\t':
if (s[i + 1] >= 97 && s[i + 1] <= 122)
{
s[i + 1] = s[i + 1] - 32;
}
}
}
return (s);
}
