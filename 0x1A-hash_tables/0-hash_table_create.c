#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: size of array.
 * Return: If error occurs - NULL.
 * Otherwise - pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;

	return (table);
}

