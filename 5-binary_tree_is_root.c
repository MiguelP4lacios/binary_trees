#include "binary_trees.h"
/**
 * binary_tree_is_root - Is root
 * @node: node of tree
 * Return: 1 if is a root and 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
