#include <stdlib.h>
#include "main.h"

/**
 * deletegrid - function that deletes unused grid in the heap
 * @grid: a 2 dimensional string array in the heap
 * @size: the length of the string
 */

void deletegrid(char **grid, unsigned int size)
{
	if (grid != NULL && size != 0)
	{
		for (; size > 0; size--)
		{
			free(grid[size]);
		}
		free(grid[size]);
		free(grid);
	}
}

/**
 * strtow - function that splits a string into words
 * @str: the arrary of strings
 * Return: a pointer to an array of strings
 */

char **strtow(char *str)
{
	unsigned int i, j, k, m;
	unsigned int length;
	char **words;

	if (*str == '\0' || str == NULL)
		return (NULL);
	for (m = length = 0; str[m] != '\0'; m++)
	{
		if (str[m] != '' &&(str[m + 1] == '' || str[m + 1] == '\0'))
			length++;
	}
	words = malloc(sizeof(char *) * (length + 1));
	if (words == NULL || length == 0)
	{
		free(words);
		return (NULL);
	}
	for (i = k = 0; i < length; i++)
	{
		for (m = k; str[m] != '\0'; m++)
		{
			if (str[m] == '')
				k++;
			if (str[m] != '' &&(str[m + 1] == '' || str[m + 1] == '\0'))
			{
				words[i] = malloc((m - k + 2) * sizeof(char));
			if (words[i] == NULL)
			{
				deletegrid(words, i);
				return (NULL);
			}
			break;
		}
	}
	for (j = 0; k <= m; k++, j++)
		words[i][j] = str[k];
	words[i][j] = '\0';
	}
	words[i] = NULL;
	return (words);
}
