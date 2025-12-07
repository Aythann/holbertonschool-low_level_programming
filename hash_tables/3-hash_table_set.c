#include "hash_tables.h"

/**
 * update_node - Updates value of an existing key
 * @node: The node to update
 * @value: The new value
 *
 * Return: 1 on success, 0 on failure
 */
int update_node(hash_node_t *node, const char *value)
{
	char *value_dup = strdup(value);

	if (value_dup == NULL)
		return (0);

	free(node->value);
	node->value = value_dup;
	return (1);
}

/**
 * create_node - Creates a new hash node
 * @key: The key
 * @value: The value
 *
 * Return: Pointer to new node, or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - Adds or updates an element in a hash table
 * @ht: The hash table
 * @key: The key (cannot be empty)
 * @value: The value to store
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (update_node(node, value));
		node = node->next;
	}

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
