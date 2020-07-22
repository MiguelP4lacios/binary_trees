#include "binary_trees.h"
/**
 * binary_tree_depth- function that measures the depth of a binary tree
 * @tree: Is a pointer to the root node of the tree to measure the depth.
 * Return: depth of tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i;

	if (tree == NULL)
		return (0);

	for (i = 0; tree; i++)
		tree = tree->parent;
	return (i - 1);
}
