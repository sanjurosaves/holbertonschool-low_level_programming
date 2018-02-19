#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog from memory
 * @d: dog to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
