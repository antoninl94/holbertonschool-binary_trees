#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function to creates a binary tree right
 * @parent: a pointer to the parent right of the right to create
 * @value: is the value to put in the new right
 * Return: a pointer to the new right, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->right = NULL;
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
	}
	new_node->parent = parent;
	parent->right = new_node;
	return (new_node);
}
