#include <stdlib.h>
#include "main.h"

/**
 * _realloc -  function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: newly allocated space, in the range from the start of ptr
 * up to the minimum of the old and new sizes
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *memory;
	char *adjstring;
	char *fillup;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		memory = malloc(new_size);
		if (memory == NULL)
			return (NULL);
		return (memory);
	}
	else if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	adjstring = ptr;
	memory = (char *)malloc(sizeof(*adjstring) * new_size);
	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}
	fillup = memory;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		fillup[i] = *adjstring++;
	}
	free(ptr);
	return (memory);
}
