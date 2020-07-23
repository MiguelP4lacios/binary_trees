#include "binary_trees.h"
/**
 * binary_tree_height- function that measures the height of a binary tree
 * @tree: Is a pointer to the root node of the tree to measure the height.
 * Return: height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl, hr;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	hl = binary_tree_height(tree->left) + 1;
	hr = binary_tree_height(tree->right) + 1;
	if (hr > hl)
		return (hr);
	return (hl);
}
