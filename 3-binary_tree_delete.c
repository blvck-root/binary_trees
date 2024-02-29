#include "binary_trees.h"

/**
 * is_leaf - check if node is leaf
 * @node: pointer to tree node
 * Return: 0 if node has no child nodes else 1 and -1 if error
 */
int is_leaf(binary_tree_t *node)
{
	if (node == NULL)
		return (-1);
	else if (node->left == NULL && node->right == NULL)
		return (0);
	else
		return (1);
}

/**
 * binary_tree_delete - delete entire binary tree
 * @tree: pointer to root node
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (is_leaf(tree) != 1)
	{
		free(tree);
		tree = NULL;
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
