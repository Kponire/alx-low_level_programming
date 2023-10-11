#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: thevname of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: copy of name and owner of the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int j;
	int k;
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	;
	for (j = 0; owner[j]; j++)
	;
	newdog->name = malloc(i + 1);
	newdog->owner = malloc(j + 1);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		newdog->name[k] = name[k];
	}
	newdog->name[k] = '\0';
	for (k = 0; k < j; k++)
	{
		newdog->owner[k] = owner[k];
	}
	newdog->owner[k] = '\0';
	newdog->age = age;
	return (newdog);
}
