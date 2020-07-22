#include "binary_trees.h"
/**
 * binary_tree_insert_rigth- inserts a node as the right-child of another node
 * @parent: is a pointer to the parent node of the node to create
 * @value:  is the value to put in the new node
 * Return: tree nodes
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = parent->right;
	parent->right = node;

	if (node->right)
		node->right->parent = node;
	return (node);
}