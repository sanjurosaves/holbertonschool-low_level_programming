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
	if (d->name == NULL && d->owner == NULL && d->age == 0.0)
		;
	else
	{
	printf("Name: %s\n", ((d->name == NULL) ? "(nil)" : d->name));
	if (d->age != 0.0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	printf("Owner: %s\n", ((d->owner == NULL) ? "(nil)" : d->owner));
	}

}
