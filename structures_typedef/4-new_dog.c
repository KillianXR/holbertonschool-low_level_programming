#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
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

	name_cp = malloc(_strlen(name) + 1);
	if (name_cp == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(name_cp, name);

	owner_cp = malloc(_strlen(owner) + 1);
	if (owner_cp == NULL)
	{
		free(name_cp);
		free(dog);
		return (NULL);
	}
	_strcpy(owner_cp, owner);

	dog->name = name_cp;
	dog->owner = owner_cp;
	dog->age = age;

	return (dog);
}
