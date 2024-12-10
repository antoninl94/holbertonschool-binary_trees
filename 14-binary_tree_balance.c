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
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_height = binarytreeheight(tree->left);
	right_height = binarytreeheight(tree->right);
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balanceL, balanceR;

	if (tree == NULL)
		return (0);
	balanceL = binarytreeheight(tree->left);
	balanceR = binarytreeheight(tree->right);
	return (balanceL - balanceR);
}
