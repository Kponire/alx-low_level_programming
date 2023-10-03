#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: the first given string
 * @s2: the second given string
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned int k, m = 0;
	char *strconcat;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	strconcat = malloc(size(char) * (i + j + 1));
	if (strconcat == NULL)
	{
		free(strconcat);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		strconcat[k] = s1[k];
	}
	for (k; k < (i + j); k++, m++)
	{
		strconcat[k] = s2[m];
	}
	return (strconcat);
}
