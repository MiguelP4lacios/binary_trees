#include "binary_trees.h"
/**
 * binary_tree_insert_left- function that creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value:  is the value to put in the new node
 * Return: tree nodes
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node = binary_tree_node(parent, value);
	node->left = parent->left;
	parent->left = node;

	if (node->left)
		node->left->parent = node;
	return (node);
}
