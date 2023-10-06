#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2 to be concatenated
 * Return: the new string s1 and s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;
	if (n > j)
		n = j;
	newstr = (char *)malloc(sizeof(char) * (i + n + 1));
	if (newstr == NULL)
	{
		free(newstr);
		return (0);
	}
	for (k = 0; k < i; k++)
		newstr[k] = s1[k];
	for (; k <= (i + n); k++)
		newstr[k] = s2[k - i];
	newstr[k] = '\0';
	return (newstr);
}
