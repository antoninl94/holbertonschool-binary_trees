#include "binary_trees.h"

#include "binary_trees.h"

/**
 * binarytreeheight- measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height
 *Return: 0 if null else the height
 */

int binarytreeheight(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = tree->left ? 1 + binarytreeheight(tree->left) : 0;
	right_height = tree->right ? 1 + binarytreeheight(tree->right) : 0;
	return (left_height > right_height ? left_height : right_height);
}

/**
 * binarytreesize- a function that measures the size of a binary tree
 *@tree: pointer to the root node of the tree to measure the size
 *Return: 0 if NULL else the size of the tree
 */
int binarytreesize(const binary_tree_t *tree)

{
	int left_size, right_size, total;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_size = binarytreesize(tree->left);
	right_size = binarytreesize(tree->right);
	total = left_size + right_size + 1;

	return (total);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if is perfect, 0 if tree is NULL or not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = binarytreeheight(tree);
	int size = binarytreesize(tree);
	int perfect = 1, count;

	if (tree == NULL)
		return (0);
	for (count = 0; count <= height; count++)
		perfect *= 2;
	if (size == perfect - 1)
		return (1);
	else
		return (0);
}
