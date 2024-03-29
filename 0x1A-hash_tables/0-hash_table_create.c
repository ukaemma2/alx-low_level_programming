#include "hash_tables.h"

/**
 * hasb_table_create - Creates a hash table.
 * @hash_table_t: table function size
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return ('\0');

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
