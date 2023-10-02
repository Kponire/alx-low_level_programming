#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the source string
 * @needle: the substring to locate
 * Return: first occurrence of the substring needle in the string haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return ('\0');
}
