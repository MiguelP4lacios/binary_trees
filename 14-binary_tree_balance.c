#include "binary_trees.h"
size_t height(const binary_tree_t *tree);
/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 * @tree: is a pointer to the root
 * node of the tree to measure the balance factor
 * Return: BF
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree->left) - height(tree->right));
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

	hl = height(tree->left) + 1;
	hr = height(tree->right) + 1;
	if (hr > hl)
		return (hr);
	return (hl);
}
