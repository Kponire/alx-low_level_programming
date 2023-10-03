#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: the amount of space to be created in the heap
 * @c: the input character
 * Return: an array of characters with the specific char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *char_array;

	if (size == 0)
		return (NULL);
	char_array = malloc(sizeof(c) * size);
	if (char_array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		char_array[i] = c;
	}
	return (char_array);
}
