#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function to create a new dog
 * @owner: pointer to owner name
 * @age: dog's age
 * @name: pointer to dog's name
 * Return: newdog, or NULL if malloc fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int ownlen, namelen, i;

	for (ownlen = 0; owner[ownlen] != '\0'; ownlen++)
		;
	for (namelen = 0; name[namelen] != '\0'; namelen++)
		;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc((namelen) * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	for (i = 0; i <= namelen; i++)
		newdog->name[i] = name[i];

	newdog->owner = malloc((ownlen) * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < ownlen; i++)
		newdog->owner[i] = owner[i];

	newdog->age = age;

	return (newdog);
}
