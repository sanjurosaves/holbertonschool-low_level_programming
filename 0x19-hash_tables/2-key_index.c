#include "hash_tables.h"

/**
 * key_index - returns index of a hash key
 * @key: pointer to key string
 * @size: size of hash table
 * Return: index of hash key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hashkey;

	hashkey = hash_djb2(key);
	index = hashkey % size;

	return (index);
}
