#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if tree node is leaf
 * @node: pointer to tree node
 * Return: 1 if node has no child nodes else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);
}
