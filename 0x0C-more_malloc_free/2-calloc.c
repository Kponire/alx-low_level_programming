#include <stdlib.h>
#include "main.h"

/**
 * placeholder - a pointer to the string
 * @mem: the array of string
 * @value: the value of the string
 * @length: the size of the array
 * Return: the string
 */

char *placeholder(char *mem, char value, unsigned int length)
{
	unsigned int i;

	for (i = 0; i < length; i++)
	{
		mem[i] = value;
	}
	return (mem);
}

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: the size of the array of each element
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	placeholder(memory, 0, (nmemb * size));
	return (memory);
}
