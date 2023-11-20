#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - check the code
 * @name:name
 * @age:age
 * @owner:owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen, ownerlen;
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	namelen = strlen(name);
	new_dog->name = malloc(sizeof(char) * (namelen + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = strcpy(new_dog->name, name);
	new_dog->age = age;
	ownerlen = strlen(owner);
	new_dog->owner = malloc(sizeof(char) * (ownerlen + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = strcpy(new_dog->owner, owner);
	return (new_dog);
}
