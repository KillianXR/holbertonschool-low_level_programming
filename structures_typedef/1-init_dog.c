#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initialize a variable of type struct dog.
 *
 * @d: Variable to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
