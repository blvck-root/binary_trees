#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right-child of another node
 * @parent: pointer to the node to insert right-child
 * @value: value of the node to store
 * Return: pointer to created node
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
	node->right = NULL;

	if (parent->right != NULL)
		node->right = parent->right;
	parent->right = node;
	return (node);
}
