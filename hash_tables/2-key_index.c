#include "hash_tables.h"
/**
 * key_index - Gets the index of a key in a hash table array
 * @key: The key for which to get the index
 * @size: Size of the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;
if (key == NULL || size == 0)
return(0);
hash = hash_djb2(key);
return (hash_djb2 (key) % size);
}
