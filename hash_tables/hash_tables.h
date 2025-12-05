#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string (unique in the hash table)
 * @value: The value corresponding to a key
 * @next: Pointer to the next node in the linked list
 *
 * Description: Node structure used in the collision chaining of a hash table.
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 *
 * Description: Hash table structure that uses an array of pointers to
 * linked lists (chaining) to handle collisions.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array in the hash table
 *
 * Return: Pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size);

/**
 * hash_djb2 - Computes a hash using the djb2 algorithm
 * @str: String used to generate the hash value
 *
 * Return: The computed hash value
 */
unsigned long int hash_djb2(const unsigned char *str);

/**
 * key_index - Gets the index of a key in a hash table array
 * @key: The key for which to get the index
 * @size: Size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/**
 * hash_table_set - Inserts or updates an element in a hash table
 * @ht: Pointer to the hash table
 * @key: The key (cannot be an empty string)
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/**
 * hash_table_get - Retrieves the value associated with a key
 * @ht: Pointer to the hash table
 * @key: The key to look for
 *
 * Return: Pointer to the value associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key);

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
 *
 * Description: Prints the key/value pairs in the order they appear in the
 * array of the hash table.
 */
void hash_table_print(const hash_table_t *ht);

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer to the hash table
 *
 * Description: Frees all the memory used by the hash table.
 */
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - Node of a sorted hash table
 * @key: The key, string (unique in the hash table)
 * @value: The value corresponding to a key
 * @next: Pointer to the next node in the collision linked list
 * @sprev: Pointer to the previous node in the sorted linked list
 * @snext: Pointer to the next node in the sorted linked list
 *
 * Description: Node structure used in a sorted hash table to keep
 * elements ordered by key.
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * @shead: Pointer to the first element of the sorted linked list
 * @stail: Pointer to the last element of the sorted linked list
 *
 * Description: Hash table structure that maintains elements in a
 * sorted doubly linked list by key, in addition to the array of
 * collision chains.
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

/**
 * shash_table_create - Creates a sorted hash table
 * @size: Size of the array in the hash table
 *
 * Return: Pointer to the newly created sorted hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size);

/**
 * shash_table_set - Inserts or updates an element in a sorted hash table
 * @ht: Pointer to the sorted hash table
 * @key: The key (cannot be an empty string)
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/**
 * shash_table_get - Retrieves the value associated with a key
 * @ht: Pointer to the sorted hash table
 * @key: The key to look for
 *
 * Return: Pointer to the value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key);

/**
 * shash_table_print - Prints a sorted hash table in ascending order
 * @ht: Pointer to the sorted hash table
 *
 * Description: Prints the key/value pairs ordered by key.
 */
void shash_table_print(const shash_table_t *ht);

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: Pointer to the sorted hash table
 *
 * Description: Prints the key/value pairs ordered by key in reverse.
 */
void shash_table_print_rev(const shash_table_t *ht);

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: Pointer to the sorted hash table
 *
 * Description: Frees all the memory used by the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES_H */
