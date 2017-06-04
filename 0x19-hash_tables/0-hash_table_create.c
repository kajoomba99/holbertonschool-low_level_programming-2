#include "hash_tables.h"
/**
  * hash_table_create - function that creates a hash table
  * @size: size of the array
  * Return: a pointer to a newly created hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (size == 0)
		return (NULL);
	/* Allocate for size of hash_table */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	/* Allocate for the nodes in the array */
	hash_table->array = calloc(sizeof(hash_node_t *), size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->size = size;
	return (hash_table);
}
