#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog info or NULL
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_cp, *owner_cp;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_cp = malloc(strlen(name) + 1);
	if (name_cp == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(name_cp, name);

	owner_cp = malloc(strlen(owner) + 1);
	if (owner_cp == NULL)
	{
		free(name_cp);
		free(dog);
		return (NULL);
	}
	strcpy(owner_cp, owner);

	dog->name = name_cp;
	dog->owner = owner_cp;
	dog->age = age;

	return (dog);
}
