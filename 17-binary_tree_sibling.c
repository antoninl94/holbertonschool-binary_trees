#include "binary_trees.h"

/**
 * binary_tree_sibling- finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: NULL if no sibling, NULL if himself or his parent his a NULL,
 * if he has a sibling return the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)

{
	binary_tree_t *sib = node;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	sib = node->parent;
	if (sib->left != NULL && sib->left != node)
		return (sib->left);

	else if (sib->right != NULL && sib->right != node)
		return (sib->right);

	return (NULL);
}
