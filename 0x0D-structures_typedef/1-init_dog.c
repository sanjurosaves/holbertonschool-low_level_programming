#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @owner: pointer to owner's name
 * @age: dog's age
 * @name: pointer dog's name
 * @d: pointer to dog structure
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
