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
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	newstr = (char *)malloc(sizeof(char) * (i + j + 1));
	if (newstr == NULL)
	{
		free(newstr);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		newstr[k] = s1[k];
	}
	for (m; m <= j; k++, m++)
	{
		newstr[k] = s2[m];
	}
	return (newstr);
}
