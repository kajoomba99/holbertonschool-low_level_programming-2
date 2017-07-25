#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle of
 * Return: pointer to the uncle node, if node has no sibling, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
