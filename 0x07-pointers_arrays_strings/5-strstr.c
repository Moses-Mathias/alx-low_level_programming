#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL, if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *res;
	char *aux;

	while (*haystack != '\0')
	{
		res = haystack;
		aux = needle;

		while (*aux == *haystack && *aux != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			aux++;
		}
		if (*aux == '\0')
			return (res);
		haystack = res + 1;
	}
	return (NULL);
}
