#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left-child of another node
 * @parent: pointer to the node to insert left-child
 * @value: value of the node to store
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		node->left = parent->left;
		node->left->parent = node;
	}

	parent->left = node;
	return (node);
}
