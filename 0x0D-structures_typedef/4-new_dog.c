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
	struct dog *newdog;

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
		return (NULL);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
