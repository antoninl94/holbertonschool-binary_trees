#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function to creates a binary tree left
 * @parent: a pointer to the parent left of the left to create
 * @value: is the value to put in the new left
 * Return: a pointer to the new left, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->right = NULL;
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	else
	{
		new_node->left = NULL;
	}
	new_node->parent = parent;
	parent->left = new_node;
	return (new_node);
}
