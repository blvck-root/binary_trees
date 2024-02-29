#include "binary_trees.h"

/**
 * binary_tree_height - find the height of a binary tree
 * @tree: pointer to the root node of a tree
 * Return: height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h > right_h)
		return (1 + left_h);
	return (1 + right_h);
}
