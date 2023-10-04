#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: the size of the string array
 * @av: the 2 dimensional array containing the string
 * Return: the concantenated string
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	int length = 0;
	char *newstr;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
		length++;
	}
	length++;
	newstr = (char *)malloc(sizeof(char) * length);
	if (newstr == NULL)
	{
		free(newstr);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			newstr[k] = av[i][j];
			k++;
		}
		newstr[k] = '\n';
		k++;
	}
	newstr[k] = '\0';
	return (newstr);
}
