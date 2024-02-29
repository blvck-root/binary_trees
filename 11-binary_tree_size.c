#include "binary_trees.h"

/**
 * binary_tree_size - find the size of a node
 * @tree: pointer to the root node of a tree
 * Return: the number of nodes in a tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lsize, rsize;

	if (!tree)
		return (0);
	lsize = binary_tree_size(tree->left);
	rsize = binary_tree_size(tree->right);
	return (1 + lsize + rsize);
}
