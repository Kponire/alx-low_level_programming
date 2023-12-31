#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to a structure dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == 0)
		printf("Name: (nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("Owner: (nil\n");
	else
		printf("Owner: %s\n", d->owner);
}
