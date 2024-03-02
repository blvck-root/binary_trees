#include "binary_trees.h"

/**
 * binary_tree_height - find the height of a binary tree
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

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer to root node of the tree
 * Return: 1 if binary tree is full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int bal, left_bal, right_bal;

	if (tree == NULL)
		return (0);

	bal = binary_tree_balance(tree);
	left_bal = binary_tree_balance(tree->left);
	right_bal = binary_tree_balance(tree->right);
	if (bal % 2 != 0 ||left_bal % 2 != 0 || right_bal % 2 != 0)
		return (0);
	return (1);
}
