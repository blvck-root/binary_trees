#include "binary_trees.h"

/**
 * binary_tree_leaves - find the number of leaves in a tree
 * @tree: pointer to the root node of a tree
 * Return: the number of leaves in a tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
