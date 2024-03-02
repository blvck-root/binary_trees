#include "binary_trees.h"

/**
 * height - find the height of a binary tree
 * @tree: pointer to the root node of a tree
 * Return: height of a binary tree
 */
int height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);

	left_h = height(tree->left);
	right_h = height(tree->right);
	if (left_h > right_h)
		return (1 + left_h);
	return (1 + right_h);
}

/**
 * binary_tree_balance - find the balance factor of a bin tree
 * @tree: pointer to root node of the tree
 * Return: the balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree->left) - height(tree->right));
}
