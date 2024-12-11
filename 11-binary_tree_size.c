#include "binary_trees.h"

/**
 * binary_tree_size- a function that measures the size of a binary tree
 *@tree: pointer to the root node of the tree to measure the size
 *Return: 0 if NULL else the size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size, total;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	total = left_size + right_size + 1;

	return (total);
}
