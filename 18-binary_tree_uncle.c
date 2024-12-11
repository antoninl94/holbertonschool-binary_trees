#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle, *parent;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	parent = node->parent;
	uncle = node->parent->parent;
	if (uncle->left != NULL && uncle->left != parent)
	{
		uncle = uncle->left;
		return (uncle);
	}
	else if (uncle->right != NULL && uncle->right != parent)
	{
		uncle = uncle->right;
		return (uncle);
	}
	else
		return (NULL);
}
