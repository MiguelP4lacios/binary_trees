#include "binary_trees.h"
/**
 * 
 * 
 * 
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl, hr;
	if (!tree)
		return (-1);

	hl = binary_tree_height(tree->left) + 1;
	hr = binary_tree_height(tree->right) + 1;
	if (hr > hl)
		return (hr);
	return (hl);
}