#include "binary_trees.h"
size_t height(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 or 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (height(tree->left) == height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
/**
 * height- function that measures the height of a binary tree
 * @tree: Is a pointer to the root node of the tree to measure the height.
 * Return: height of tree
*/
size_t height(const binary_tree_t *tree)
{
	size_t hl, hr;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	hl = height(tree->left) + 1;
	hr = height(tree->right) + 1;
	if (hr > hl)
		return (hr);
	return (hl);
}
