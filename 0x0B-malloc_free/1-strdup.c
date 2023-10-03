#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 * @str: the given string
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j;
	char *str_copy;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	str_copy = malloc(sizeof(str) * i);
	if (str_copy == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		str_copy[j] = str[j];
	}
	return (str_copy);
}
