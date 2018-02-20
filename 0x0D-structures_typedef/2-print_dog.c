#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function to print a dog
 * @d: a dog named d
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", ((d->name == NULL) ? "(nil)" : d->name));

	printf("Age: %f\n", d->age);

	printf("Owner: %s\n", ((d->owner == NULL) ? "(nil)" : d->owner));
	}

}
