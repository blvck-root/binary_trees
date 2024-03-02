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
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: pointer to root node
 * Return: 1 if all nodes except leaves have 2 children, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (height(tree->left) != height(tree->right))
		return (0);
	if (!tree->right && tree->left)
		return (0);
	if (tree->right && !tree->left)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
