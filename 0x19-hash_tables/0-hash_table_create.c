#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **array;
	hash_table_t *ht;
	unsigned long int i;

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = array;

	return (ht);
}
