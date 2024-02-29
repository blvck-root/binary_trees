#include "binary_trees.h"

/**
 * binary_tree_nodes - find the number of nodes in a tree
 * @tree: pointer to the root node of a tree
 * Return: the number of nodes in a tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
