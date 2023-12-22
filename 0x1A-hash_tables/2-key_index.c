#include "hash_tables.h"
/**
 * Calculates the index of a key within a hash table of a given size.
 *
 * @param key The key to hash.
 * @param size The size of the hash table's internal array.
 *
 * @return The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}	
